/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 21:16:18 by root              #+#    #+#             */
/*   Updated: 2024/12/24 16:10:19 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class ClapTrap
{
protected:
	std::string name;
	unsigned int health;
	unsigned int energy;
	unsigned int attackDamage;

public:
	// Constructor
	ClapTrap(std::string name);
	ClapTrap();
	// Copy Constructor
	ClapTrap(const ClapTrap &copy);

	// Copy assignment operator
	ClapTrap &operator=(const ClapTrap &src);

	// Destructor
	virtual ~ClapTrap();

	// Public method
	virtual void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};
