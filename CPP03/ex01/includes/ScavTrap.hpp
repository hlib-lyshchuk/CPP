/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:33:54 by root              #+#    #+#             */
/*   Updated: 2024/12/25 18:49:09 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	bool isGuardingGate;
	static const unsigned int MAX_HIT_POINTS = 100;
	static const unsigned int MAX_ENERGY = 50;

public:
	// constructor
	ScavTrap();
	ScavTrap(std::string scav_name);
	// copy constructor
	ScavTrap(const ScavTrap &copy);
	// copy assignment operator
	ScavTrap &operator=(const ScavTrap &src);
	// destructor
	~ScavTrap();
	// public methods
	void attack(const std::string &target);
	void guardGate();
};
