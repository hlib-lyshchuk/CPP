#include "Replace.hpp"
#include <iostream>

bool Replace::processFile(const std::string &filename, const std::string &s1, const std::string &s2)
{
	if (s1.empty() || s2.empty())
	{
		std::cerr << "Error: Strings cannot be empty." << std::endl;
		return false;
	}

	std::ifstream inFile(filename.c_str());
	if (!inFile.is_open())
	{
		std::cerr << "Error: Cannot open file " << filename << std::endl;
		return false;
	}

	// Read file content into a string manually (C++98-compatible)
	std::string content;
	std::string line;
	while (std::getline(inFile, line))
	{
		content += line + "\n";
	}
	inFile.close();

	// Perform the replacement
	std::string replacedContent = replaceAll(content, s1, s2);

	std::ofstream outFile((filename + ".replace").c_str());
	if (!outFile.is_open())
	{
		std::cerr << "Error: Cannot create output file." << std::endl;
		return false;
	}

	outFile << replacedContent;
	outFile.close();
	return true;
}

std::string Replace::replaceAll(const std::string &content, const std::string &s1, const std::string &s2)
{
	std::string result;
	size_t startPos = 0;
	size_t foundPos;

	while ((foundPos = content.find(s1, startPos)) != std::string::npos)
	{
		result.append(content, startPos, foundPos - startPos); // Append text before s1
		result.append(s2);									   // Append s2
		startPos = foundPos + s1.length();					   // Move past s1
	}
	result.append(content, startPos, content.length() - startPos); // Append remaining text

	return result;
}
