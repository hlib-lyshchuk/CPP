/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:28:21 by root              #+#    #+#             */
/*   Updated: 2024/12/26 11:36:04 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"
#include "../includes/DiamondTrap.hpp"

int main()
{
	std::cout << "\n--- Testing DiamondTrap Features ---\n"
			  << std::endl;

	// Create a DiamondTrap object using the parameterized constructor
	DiamondTrap diamond("ShinyDiamond");

	std::cout << "\n--- Testing Attack Feature ---\n"
			  << std::endl;
	// Test attack (using ScavTrap::attack)
	diamond.attack("Enemy Target");

	std::cout << "\n--- Testing DiamondTrap Specific Method ---\n"
			  << std::endl;
	// Test DiamondTrap-specific functionality
	diamond.whoAmI();

	std::cout << "\n--- Testing ScavTrap Feature ---\n"
			  << std::endl;
	// Test ScavTrap-specific feature
	diamond.guardGate();

	std::cout << "\n--- Testing FragTrap Feature ---\n"
			  << std::endl;
	// Test FragTrap-specific feature
	diamond.highFivesGuys();

	std::cout << "\n--- Testing Copy Constructor and Assignment ---\n"
			  << std::endl;
	// Test copy constructor
	DiamondTrap diamondCopy = diamond;

	// Test assignment operator
	DiamondTrap diamondAssigned;
	diamondAssigned = diamond;

	std::cout << "\n--- Testing Default Constructor ---\n"
			  << std::endl;
	// Test default constructor
	DiamondTrap defaultDiamond;

	std::cout << "\n--- Testing Destruction ---\n"
			  << std::endl;
	// All destructors will be called here as objects go out of scope
	return 0;
}
