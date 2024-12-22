/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 21:20:02 by root              #+#    #+#             */
/*   Updated: 2024/12/22 21:42:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : name(name),
									   health(10),
									   energy(10),
									   attackDamage(0)
{
	std::cout << "Contructor called for " << name << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (health == 0)
	{
		std::cout << name << " cannot attack as it has no hit points left!"
				  << std::endl;
		return;
	}
	if (energy == 0)
	{
		std::cout << name << " cannot attack as it has no energy points left!"
				  << std::endl;
		return;
	}
	energy--;
	std::cout << "ClapTrap " << name << " attacks " << target
			  << ", causing " << attackDamage << " points of damage!"
			  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (health == 0)
	{
		std::cout << name << " is already dead!" << std::endl;
		return;
	}

	unsigned int damageTaken = (amount > health) ? health : amount;
	health -= damageTaken;

	std::cout << "ClapTrap " << name << " takes " << damageTaken
			  << " points of damage. "
			  << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (health == 0)
	{
		std::cout << "ClapTrap " << name << " cannot be repaired as it has no hit points left!" << std::endl;
		return;
	}
	if (energy == 0)
	{
		std::cout << "ClapTrap " << name << " cannot be repaired as it has no energy points left!" << std::endl;
		return;
	}

	energy--;
	health += amount;

	std::cout << "ClapTrap " << name << " repairs itself, recovering "
			  << amount << " hit points. " << health << " hit points now."
			  << std::endl;
}