/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:01:01 by root              #+#    #+#             */
/*   Updated: 2024/12/19 11:47:02 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

Contact::Contact() : first_name(""), last_name(""), nickname(""),
					 phone_number(""), darkest_secret("")
{
	std::cout << "Default contructor for Contact called\n";
}

Contact::~Contact()
{
	std::cout << "Default destructor for Contact called\n";
}

std::string Contact::getFirstName(void) const
{
	return (first_name);
}

std::string Contact::getLastName(void) const
{
	return (last_name);
}

std::string Contact::getNickname(void) const
{
	return (nickname);
}

std::string Contact::getPhoneNumber(void) const
{
	return (phone_number);
}

std::string Contact::getSecret(void) const
{
	return (darkest_secret);
}

void Contact::setFirstName(const std::string f_name)
{
	first_name = f_name;
}
void Contact::setLastName(const std::string l_name)
{
	last_name = l_name;
}
void Contact::setNickname(const std::string nick)
{
	nickname = nick;
}
void Contact::setPhoneNumber(const std::string phone)
{
	phone_number = phone;
}
void Contact::setSecret(const std::string secret)
{
	darkest_secret = secret;
}
