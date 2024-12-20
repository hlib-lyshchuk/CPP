/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:27:40 by root              #+#    #+#             */
/*   Updated: 2024/12/20 11:02:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

Harl::Harl() {}
Harl::~Harl() {}

void Harl::debug(void)
{
	std::cout << "[ DEBUG ]\n"
				 "I love having extra bacon for my 7XL-double-cheese-triple"
				 "-pickle-specialketchup burger. I really do!"
			  << std::endl;
}
void Harl::info(void)
{
	std::cout << "[ INFO ]\n"
				 "I cannot believe adding extra bacon costs more money. "
				 "You didn't put enough bacon in my burger! "
				 "If you did, I wouldn't be asking for more!"
			  << std::endl;
}
void Harl::warning(void)
{
	std::cout << "[ WARNING ]\n"
				 "I think I deserve to have some extra bacon for free. "
				 "I've been coming for years whereas you started working "
				 "here since last month."
			  << std::endl;
}
void Harl::error(void)
{
	std::cout << "[ ERROR ]\n"
				 "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complainFilter(std::string level)
{
	int index = -1;
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	for (int i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			index = i;
			break;
		}
	}
	switch (index)
	{
	case 0:
		debug();
		info();
		warning();
		error();
		break;
	case 1:
		info();
		warning();
		error();
		break;
	case 2:
		warning();
		error();
		break;
	case 3:
		error();
		break;
	default:
		std::cout << "[ Probably complaining about insignificant problems ]"
				  << std::endl;
		break;
	}
}
