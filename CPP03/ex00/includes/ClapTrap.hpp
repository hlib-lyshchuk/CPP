/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 17:46:20 by root              #+#    #+#             */
/*   Updated: 2024/12/25 18:27:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap
{
private:
	std::string name;
	unsigned int hit_points;
	unsigned int energy;
	unsigned int attack_dmg;

	static const unsigned int MAX_HIT_POINTS = 10;
	static const unsigned int MAX_ENERGY = 10;

public:
	// constructor
	ClapTrap();
	ClapTrap(std::string clap_name);
	// copy constructor
	ClapTrap(const ClapTrap &copy);
	// copy assignment operator
	ClapTrap &operator=(const ClapTrap &src);
	// destructor
	~ClapTrap();
	// public methods
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
