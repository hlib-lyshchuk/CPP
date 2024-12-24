/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 21:20:02 by root              #+#    #+#             */
/*   Updated: 2024/12/24 15:54:50 by root             ###   ########.fr       */
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
	std::cout << "ClapTrap contructor called for " << name << std::endl;
}

ClapTrap::ClapTrap() : name("default"), health(10), energy(10), attackDamage(0)
{
	std::cout << "ClapTrap Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->health = src.health;
	this->energy = src.energy;
	this->attackDamage = src.attackDamage;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << name << std::endl;
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
