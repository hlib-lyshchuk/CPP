/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:37:57 by root              #+#    #+#             */
/*   Updated: 2024/12/25 19:05:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "../includes/ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap(),
					   isGuardingGate(false)
{
	this->hit_points = MAX_HIT_POINTS;
	this->energy = MAX_ENERGY;
	this->attack_dmg = 20;
	this->isGuardingGate = false;
	std::cout << "ScavTrap default constructor called" << std::endl;
}
ScavTrap::ScavTrap(std::string scav_name) : ClapTrap(scav_name),
											isGuardingGate(false)
{
	this->hit_points = MAX_HIT_POINTS;
	this->energy = MAX_ENERGY;
	this->attack_dmg = 20;
	this->isGuardingGate = false;
	std::cout << "ScavTrap constructor called for " << scav_name << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "ScavTrap Copy Constructor called" << std::endl;
	this->isGuardingGate = copy.isGuardingGate;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src)
{
	std::cout << "ScavTrap assignment operator called" << std::endl;
	this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy = src.energy;
	this->attack_dmg = src.attack_dmg;
	this->isGuardingGate = src.isGuardingGate;
	return *this;
}
ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called for " << name << std::endl;
}

void ScavTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hit_points > 0)
	{
		std::cout << "ScavTrap " << this->name << " attacks " << target
				  << ", causing " << this->attack_dmg << " points of damage!"
				  << std::endl;
		this->energy--;
	}
	else if (this->energy == 0)
		std::cout << "ScavTrap " << this->name << " has no energy to attack"
				  << std::endl;
	else
		std::cout << "ScavTrap " << this->name << " has no hit points to attack"
				  << std::endl;
}
void ScavTrap::guardGate()
{
	if (this->isGuardingGate)
	{
		std::cout << "ScavTrap " << this->name
				  << " is already guarding the gate"
				  << std::endl;
		return;
	}
	else
	{
		this->isGuardingGate = true;
		std::cout << "ScavTrap " << this->name
				  << " is now in Gate keeper mode. Noone shall pass. HODOR!"
				  << std::endl;
		return;
	}
}
