/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:56:46 by root              #+#    #+#             */
/*   Updated: 2024/12/25 19:01:31 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include "../includes/ClapTrap.hpp"

ClapTrap::ClapTrap() : name("default"),
					   hit_points(MAX_HIT_POINTS),
					   energy(MAX_ENERGY),
					   attack_dmg(0)
{
	std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string clap_name) : name(clap_name),
											hit_points(10),
											energy(10),
											attack_dmg(0)
{
	std::cout << "ClapTrap constructor called for " << clap_name << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy)
{
	std::cout << "ClapTrap Copy Constructor called" << std::endl;
	*this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src)
{
	std::cout << "ClapTrap assignment operator called" << std::endl;
	this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy = src.energy;
	this->attack_dmg = src.attack_dmg;
	return *this;
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destructor called for " << name << std::endl;
}

void ClapTrap::attack(const std::string &target)
{
	if (this->energy > 0 && this->hit_points > 0)
	{
		std::cout << "ClapTrap " << this->name << " attacks " << target
				  << ", causing " << this->attack_dmg << " points of damage!"
				  << std::endl;
		this->energy--;
	}
	else if (this->energy == 0)
		std::cout << "ClapTrap " << this->name << " has no energy to attack"
				  << std::endl;
	else
		std::cout << "ClapTrap " << this->name << " has no hit points to attack"
				  << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_points > amount)
		this->hit_points -= amount;
	else if (this->hit_points > 0)
		this->hit_points = 0;
	else
	{
		std::cout << " ClapTrap " << this->name << " is already dead."
				  << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->name << " was attacked and lost " << amount
			  << " hit points " << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_points == 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead and cannot be repaired." << std::endl;
		return;
	}

	if (this->energy == 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy to repair itself." << std::endl;
		return;
	}

	if (this->hit_points == this->MAX_HIT_POINTS)
	{
		std::cout << "ClapTrap " << this->name << " already has maximum hit points." << std::endl;
		return;
	}

	if (this->hit_points == this->MAX_HIT_POINTS)
	{
		std::cout << "ClapTrap " << this->name << " already has maximum hit points." << std::endl;
		return;
	}

	unsigned int repairedAmount = std::min(amount, this->MAX_HIT_POINTS - this->hit_points);
	this->hit_points += repairedAmount;
	this->energy--;

	std::cout << "ClapTrap " << this->name << " repaired itself by " << repairedAmount
			  << " points to " << this->hit_points << " hit points." << std::endl;
}
