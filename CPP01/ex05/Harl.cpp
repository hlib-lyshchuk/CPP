/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 10:27:40 by root              #+#    #+#             */
/*   Updated: 2024/12/20 10:45:17 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <string>
#include <iostream>

void Harl::debug(void)
{
	std::cout << "DEBUG:"
				 "I love having extra bacon for my 7XL-double-cheese-triple"
				 "-pickle-specialketchup burger. I really do!"
			  << std::endl;
}
void Harl::info(void)
{
	std::cout << "INFO: "
				 "I cannot believe adding extra bacon costs more money. "
				 "You didn't put enough bacon in my burger! "
				 "If you did, I wouldn't be asking for more!"
			  << std::endl;
}
void Harl::warning(void)
{
	std::cout << "WARNING: "
				 "I think I deserve to have some extra bacon for free. "
				 "I've been coming for years whereas you started working "
				 "here since last month."
			  << std::endl;
}
void Harl::error(void)
{
	std::cout << "ERROR: "
				 "This is unacceptable! I want to speak to the manager now."
			  << std::endl;
}

void Harl::complain(std::string level)
{
	const std::string levels[] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	HarlMemFn functions[] = {&Harl::debug,
							 &Harl::info,
							 &Harl::warning,
							 &Harl::error};
	for (size_t i = 0; i < 4; i++)
	{
		if (level == levels[i])
		{
			(this->*functions[i])();
			return;
		}
	}
	std::cerr << "Unknown level: " << level << std::endl;
}

Harl::Harl() {}
Harl::~Harl() {}