/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 19:17:37 by root              #+#    #+#             */
/*   Updated: 2024/12/25 19:28:08 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/FragTrap.hpp"
#include <string>
#include <iostream>

FragTrap::FragTrap() : ClapTrap()
{
	this->hit_points = MAX_HIT_POINTS;
	this->energy = MAX_ENERGY;
	this->attack_dmg = 30;
	std::cout << "FragTrap default constructor called" << std::endl;
}
FragTrap::FragTrap(std::string frag_name) : ClapTrap(frag_name)
{
	this->hit_points = MAX_HIT_POINTS;
	this->energy = MAX_ENERGY;
	this->attack_dmg = 30;
	std::cout << "FragTrap constructor called for " << frag_name << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy)
{
	std::cout << "FragTrap Copy Constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &src)
{
	std::cout << "FragTrap assignment operator called" << std::endl;
	this->name = src.name;
	this->hit_points = src.hit_points;
	this->energy = src.energy;
	this->attack_dmg = src.attack_dmg;
	return *this;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called for " << name << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "High five? High five" << std::endl;
}
