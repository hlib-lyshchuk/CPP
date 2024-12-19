/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 17:01:01 by root              #+#    #+#             */
/*   Updated: 2024/12/19 10:47:56 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {}

Contact::Contact(std::string f_name, std::string l_name, std::string nick,
				 std::string phone, std::string secret)
{
	first_name = f_name;
	last_name = l_name;
	nickname = nick;
	phone_number = phone;
	darkest_secret = secret;
}

Contact::~Contact() {}

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
