/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:28:21 by root              #+#    #+#             */
/*   Updated: 2024/12/25 18:28:28 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/ClapTrap.hpp"

int main()
{
	// Test default constructor
	ClapTrap defaultClap;
	std::cout << "=== Default ClapTrap ===" << std::endl;
	defaultClap.attack("Target1");
	defaultClap.takeDamage(5);
	defaultClap.beRepaired(3);

	// Test parameterized constructor
	ClapTrap namedClap("Clappy");
	std::cout << "\n=== Named ClapTrap ===" << std::endl;
	namedClap.attack("Target2");
	namedClap.takeDamage(11); // Edge case: Taking more damage than hit points
	namedClap.beRepaired(5);  // Edge case: Trying to repair when dead

	// Test copy constructor
	ClapTrap copiedClap(namedClap);
	std::cout << "\n=== Copied ClapTrap ===" << std::endl;
	copiedClap.attack("Target3");
	copiedClap.beRepaired(2);

	// Test assignment operator
	ClapTrap assignedClap;
	assignedClap = defaultClap;
	std::cout << "\n=== Assigned ClapTrap ===" << std::endl;
	assignedClap.attack("Target4");
	assignedClap.takeDamage(8);
	assignedClap.beRepaired(5);

	// Test edge case: No energy to attack
	ClapTrap exhaustedClap("Exhausted");
	std::cout << "\n=== Energy Exhaustion Test ===" << std::endl;
	for (int i = 0; i < 12; ++i) // Exceed energy limits
	{
		exhaustedClap.attack("DummyTarget");
	}

	// Test edge case: Full health repair
	ClapTrap healthyClap("Healthy");
	std::cout << "\n=== Full Health Repair Test ===" << std::endl;
	healthyClap.beRepaired(1); // Should indicate already at max health

	// Test edge case: Multiple repairs to reach max health
	ClapTrap injuredClap("Injured");
	injuredClap.takeDamage(5);
	std::cout << "\n=== Incremental Repairs Test ===" << std::endl;
	for (int i = 0; i < 3; ++i) // Incremental repairs
	{
		injuredClap.beRepaired(2);
	}

	return 0;
}
