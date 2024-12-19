/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/18 16:57:14 by root              #+#    #+#             */
/*   Updated: 2024/12/19 10:48:13 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Contact
{
private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number;
	std::string darkest_secret;

public:
	Contact();
	Contact(std::string f_name, std::string l_name, std::string nick,
			std::string phone, std::string secret);
	~Contact();

	std::string getFirstName(void) const;
	std::string getLastName(void) const;
	std::string getNickname(void) const;
	std::string getPhoneNumber(void) const;
	std::string getSecret(void) const;

	void setFirstName(const std::string f_name);
	void setLastName(const std::string l_name);
	void setNickname(const std::string nick);
	void setPhoneNumber(const std::string phone);
	void setSecret(const std::string secret);
};
