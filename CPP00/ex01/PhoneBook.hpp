/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:51:42 by root              #+#    #+#             */
/*   Updated: 2024/12/19 11:47:03 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <string>

class PhoneBook
{
private:
	Contact contacts[7];
	int currentIndex;
	int totalContacts;

	std::string formatField(const std::string &field) const;

public:
	PhoneBook();
	~PhoneBook();
	int getTotalContacts(void) const;
	void addContact(std::string f_name, std::string l_name,
					std::string nick, std::string phone,
					std::string secret);
	void displayContacts() const;
	void displayContactDetails(int index) const;
};
