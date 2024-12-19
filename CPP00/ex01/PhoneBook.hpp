/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:51:42 by root              #+#    #+#             */
/*   Updated: 2024/12/19 09:06:53 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Contact.hpp"
#include <string>

class PhoneBook
{
private:
	Contact contacts[8];
	int currentIndex;
	int totalContacts;

	std::string formatField(const std::string &field) const;

public:
	PhoneBook();
	~PhoneBook();
	int getTotalContacts(void) const;
	void addContact(const Contact &contact);
	void displayContacts() const;
	void displayContactDetails(int index) const;
};
