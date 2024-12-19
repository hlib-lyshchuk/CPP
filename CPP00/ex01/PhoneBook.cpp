/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:37:29 by root              #+#    #+#             */
/*   Updated: 2024/12/19 11:48:20 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"
#include <string>
#include <iostream>
#include <iomanip>

PhoneBook::PhoneBook() : currentIndex(0), totalContacts(0)
{
	std::cout << "Default contructor for Contact called\n";
}

PhoneBook::~PhoneBook()
{
	std::cout << "Default destructor for Contact called\n";
}

std::string PhoneBook::formatField(const std::string &field) const
{
	if (field.length() > 10)
	{
		return field.substr(0, 9) + ".";
	}
	return field;
}

int PhoneBook::getTotalContacts(void) const { return totalContacts; }

void PhoneBook::addContact(std::string f_name, std::string l_name, std::string nick, std::string phone, std::string secret)
{
	contacts[currentIndex].setFirstName(f_name);
	contacts[currentIndex].setLastName(l_name);
	contacts[currentIndex].setNickname(nick);
	contacts[currentIndex].setPhoneNumber(phone);
	contacts[currentIndex].setSecret(secret);
	currentIndex = (currentIndex + 1) % 8;
	if (totalContacts < 8)
		totalContacts++;
}
void PhoneBook::displayContacts() const
{
	if (totalContacts == 0)
	{
		std::cout << "No contacts available.\n";
		return;
	}
	std::cout << std::setw(10) << "Index" << "|"
			  << std::setw(10) << "First Name" << "|"
			  << std::setw(10) << "Last Name" << "|"
			  << std::setw(10) << "Nickname" << "\n";

	for (int i = 0; i < totalContacts; i++)
	{
		std::cout << std::setw(10) << i + 1 << "|"
				  << std::setw(10) << formatField(contacts[i].getFirstName()) << "|"
				  << std::setw(10) << formatField(contacts[i].getLastName()) << "|"
				  << std::setw(10) << formatField(contacts[i].getNickname()) << "\n";
	}
}

void PhoneBook::displayContactDetails(int index) const
{
	if (index < 0 || index >= totalContacts)
	{
		std::cout << "Invalid index.\n";
		return;
	}
	std::cout << "First Name: " << contacts[index].getFirstName() << "\n"
			  << "Last Name: " << contacts[index].getLastName() << "\n"
			  << "Nickname: " << contacts[index].getNickname() << "\n"
			  << "Phone Number: " << contacts[index].getPhoneNumber() << "\n"
			  << "Darkest Secret: " << contacts[index].getSecret() << "\n";
}
