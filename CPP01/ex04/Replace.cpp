/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Replacemy.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 09:00:23 by root              #+#    #+#             */
/*   Updated: 2024/12/20 10:21:39 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Replace.hpp"
#include <string>
#include <iostream>
#include <fstream>

std::string Replace::replaceAll(const std::string &content,
								const std::string &s1,
								const std::string &s2)
{
	std::string result;
	size_t start = 0;
	size_t found = 0;
	while ((found = content.find(s1, start)) != std::string::npos)
	{
		result.append(content, start, found - start);
		result.append(s2);
		start = found + s1.length();
	}
	result.append(content, start, content.length() - start);
	return (result);
}

/**
 * @brief Checks if the file stream encountered an error during reading.
 *
 * @param ifs Reference to the input file stream.
 * @return true if there was an error (critical or non-critical, excluding EOF).
 * @return false if no error occurred or only EOF was reached.
 */
static bool ifsGetlineFail(std::ifstream &ifs)
{
	if (ifs.bad())
	{
		std::cerr << "Error: Critical I/O error while reading the file." << std::endl;
		return true;
	}
	else if (ifs.fail() && !ifs.eof())
	{
		std::cerr << "Error: Non-critical read error occurred (e.g., invalid format)." << std::endl;
		return true;
	}
	return false;
}

/**
 * @brief Static method of Replace class which reads and opens a filename
 *        and writes all content of the filename to a new file with the
 *        extension .replace. Also replaces all occurrences of s1 with s2
 *        using the private method replaceAll.
 *
 * @param filename The name of the file to process.
 * @param s1 The string to search for in the file content.
 * @param s2 The string to replace s1 with in the file content.
 * @return true if successful (e.g., new file created and all occurrences
 *         of s1 replaced with s2), false otherwise.
 */
bool Replace::processFile(const std::string &filename,
						  const std::string &s1,
						  const std::string &s2)
{
	std::string content, line, replacedContent;

	if (filename.empty() || s1.empty() || s2.empty())
	{
		std::cerr << "Error: Filename, s1, or s2 cannot be empty." << std::endl;
		return false;
	}

	// Open the input file
	std::ifstream ifs(filename.c_str());
	if (!ifs.is_open())
	{
		std::cerr << "Error: Could not open file " << filename << " for reading." << std::endl;
		return false;
	}

	// Read the file content
	while (std::getline(ifs, line))
		content += line + '\n';

	// Check for stream errors
	if (ifsGetlineFail(ifs))
	{
		return false;
	}

	// Open the output file
	std::ofstream ofs((filename + ".replace").c_str());
	if (!ofs.is_open())
	{
		std::cerr << "Error: Could not open file " << filename << ".replace for writing." << std::endl;
		return false;
	}

	replacedContent = replaceAll(content, s1, s2);
	ofs << replacedContent;
	if (ofs.fail())
	{
		std::cerr << "Error: Failed to write content to the output file." << std::endl;
		return false;
	}
	return true;
}
