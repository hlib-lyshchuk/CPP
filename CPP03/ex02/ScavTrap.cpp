/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/24 14:38:24 by root              #+#    #+#             */
/*   Updated: 2024/12/24 16:02:40 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include <iostream>
#include <string>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->health = 100;
	this->energy = 50;
	this->attackDamage = 20;
	this->isGuardGate = false;
	std::cout << "ScavTrap constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap() : ClapTrap()
{
	this->health = 100;
	this->energy = 50;
	this->attackDamage = 20;
	this->isGuardGate = false;
	std::cout << "ScavTrap default constructor called for " << name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	this->isGuardGate = copy.isGuardGate;
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap Assignation operator called" << std::endl;
	this->name = src.name;
	this->health = src.health;
	this->energy = src.energy;
	this->attackDamage = src.attackDamage;
	return *this;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << name << std::endl;
}

void ScavTrap::guardGate(void)
{
	if (isGuardGate)
		std::cout << "ScavTrap is already in Gate keeper mode" << std::endl;
	else
	{
		isGuardGate = true;
		std::cout << "ScavTrap is now in Gate keeper mode." << std::endl;
	}
}
void ScavTrap::attack(const std::string &target)
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
	std::cout << "ScavTrap " << name << " attacks " << target
			  << ", causing " << attackDamage << " points of damage!"
			  << std::endl;
}
