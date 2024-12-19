/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 09:13:32 by root              #+#    #+#             */
/*   Updated: 2024/12/19 16:48:29 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "PhoneBook.hpp"
#include <cctype>
#include <csignal>
#include <cstdlib>
#include <sstream>

// #define FATAL_ERROR "\nExiting program due to input error or EOF."
// #define FNAME_INPUT_ERROR "First name shouldn't be empty and can contain only spaces and alphabet character."
// #define LNAME_INPUT_ERROR "Last name shouldn't be empty and can contain only spaces and alphabet character."
// #define NICK_INPUT_ERROR "Nicknaem shouldn't be empty and can contain spaces and alphabet character and digits."
// #define PHONE_INPUT_ERROR "Phone number shouldn't be empty and can contain '+' on first place and digits"
// #define SECRET_INPUT_ERROR "Darkest secret shouldn't be empty and can contain spaces and alphabet character and digits."

static int addCommand(PhoneBook *phonebook);
static int searchContact(PhoneBook *phonebook);
static void printError(const std::string &msg);
static bool validateFullName(const std::string &str);
static bool validateNickSecret(const std::string &str);
static bool validatePhone(const std::string &str);
static bool validateIndexInput(const std::string &str);
static void handleSignal(int signal);

int main(int argc, char **argv)
{
	(void)argv;
	PhoneBook phonebook;
	std::string command;

	std::signal(SIGINT, handleSignal);
	std::signal(SIGQUIT, handleSignal);

	if (argc > 1)
	{
		printError("Program doesn't support arguments. Exit...");
		return (1);
	}
	while (true)
	{
		std::cout << "Enter command (ADD, SEARCH, EXIT): ";
		if (!std::getline(std::cin, command))
		{
			printError("\nExiting program due to input error or EOF.");
			break;
		}
		if (command == "ADD")
		{
			if (addCommand(&phonebook) == -1)
				break;
		}
		else if (command == "SEARCH")
		{
			if (searchContact(&phonebook) == -1)
				break;
		}
		else if (command == "EXIT")
		{
			std::cout << "Bye bye\n";
			break;
		}
		else
			std::cout << "Unknown command. Please try again.\n";
	}
	return (0);
}

static void handleSignal(int signal)
{
	if (signal == SIGINT)
		std::cout << "\nSIGINT (Ctrl+C) received. Exiting cleanly...\n";
	else if (signal == SIGQUIT)
		std::cout << "\nSIGQUIT (Ctrl+\\) received. Exiting cleanly...\n";
	std::exit(0);
}
static void printError(const std::string &msg)
{
	if (!msg.empty())
		std::cerr << msg << std::endl;
}
static bool isOnlyWhitespace(const std::string &str)
{
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (!std::isspace(static_cast<unsigned char>(str[i])))
			return false;
	}
	return true;
}

static bool validateFullName(const std::string &str)
{
	if (str.empty() || isOnlyWhitespace(str))
		return false;
	for (size_t i = 0; i < str.size(); ++i)
	{
		char c = str[i];
		if (!std::isalpha(static_cast<unsigned char>(c)) && c != ' ')
			return false;
	}
	return true;
}

static bool validateNickSecret(const std::string &str)
{
	if (str.empty() || isOnlyWhitespace(str))
		return false;
	for (size_t i = 0; i < str.size(); ++i)
	{
		char c = str[i];
		if (!std::isalnum(static_cast<unsigned char>(c)) &&
			!std::isspace(static_cast<unsigned char>(c)))
			return false;
	}
	return true;
}

static bool validatePhone(const std::string &str)
{
	size_t i = 0;

	if (str.empty() || isOnlyWhitespace(str))
		return (false);
	if (str[0] == '+')
		i++;
	for (; i < str.size(); ++i)
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return (false);
	}
	return (true);
}

static int inputWithValidation(const std::string &prompt,
							   std::string &value,
							   bool (*validator)(const std::string &),
							   const std::string &usage_msg)
{
	std::cout << prompt;
	if (!std::getline(std::cin, value))
	{
		printError("\nExiting program due to input error or EOF.");
		return (-1);
	}
	if (!validator(value))
	{
		printError(usage_msg);
		return (0);
	}
	return (1);
}

static int addCommand(PhoneBook *phonebook)
{
	int status;
	std::string first, last, nick, phone, secret;
	const std::string fname_err = "First name should not be empty and can only contain spaces and alphabetic characters.";
	const std::string lname_err = "Last name should not be empty and can only contain spaces and alphabetic characters.";
	const std::string nick_err = "Nickname should not be empty and can contain spaces, alphabetic characters, and digits.";
	const std::string phone_err = "Phone number should not be empty and can contain a '+' at the start followed by digits.";
	const std::string secret_err = "Darkest secret should not be empty and can contain spaces, alphabetic characters, and digits.";

	if (!phonebook)
	{
		printError("PhoneBook is missing. Fatal error. Exiting...");
		return (-1);
	}
	status = inputWithValidation("Enter first name: ", first, validateFullName, fname_err);
	if (status != 1)
		return (status);
	status = inputWithValidation("Enter last name: ", last, validateFullName, lname_err);
	if (status != 1)
		return (status);
	status = inputWithValidation("Enter nickname: ", nick, validateNickSecret, nick_err);
	if (status != 1)
		return (status);
	status = inputWithValidation("Enter phone number: ", phone, validatePhone, phone_err);
	if (status != 1)
		return (status);
	status = inputWithValidation("Enter darkest secret: ", secret, validateNickSecret, secret_err);
	if (status != 1)
		return (status);
	// Contact newContact(first, last, nick, phone, secret);
	phonebook->addContact(first, last, nick, phone, secret);
	std::cout << "Contact added successfully!" << std::endl;
	return (1);
}

static bool validateIndexInput(const std::string &str)
{
	if (str.empty() || isOnlyWhitespace(str))
		return (false);
	for (size_t i = 0; i < str.size(); ++i)
	{
		if (!std::isdigit(static_cast<unsigned char>(str[i])))
			return (false);
	}
	return (true);
}

static int searchContact(PhoneBook *phonebook)
{
	if (phonebook->getTotalContacts() == 0)
	{
		printError("No contacts available.");
		return (0);
	}
	phonebook->displayContacts();
	std::cout << "Enter index to view details: ";
	std::string input;
	if (!std::getline(std::cin, input))
	{
		printError("\nExiting program due to input error or EOF.");
		return (-1);
	}
	if (input.empty() || !validateIndexInput(input))
	{
		printError("Invalid index. Please enter a numeric index in range of total contacts.");
		return (0);
	}

	std::istringstream iss(input);
	int index;
	iss >> index;

	if (index < 1 || index > phonebook->getTotalContacts())
	{
		printError("Index is out of range.");
		return (0);
	}
	phonebook->displayContactDetails(index - 1);
	return (1);
}
