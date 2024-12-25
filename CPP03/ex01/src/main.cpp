/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:28:21 by root              #+#    #+#             */
/*   Updated: 2024/12/25 19:02:33 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"

int main()
{
	std::cout << "=== Default ScavTrap Tests ===" << std::endl;
	{
		// Test default constructor
		ScavTrap scavDefault;
		scavDefault.attack("DefaultTarget");
		scavDefault.takeDamage(30);
		scavDefault.beRepaired(50);
		scavDefault.guardGate();
		// Destructor will be called here at the end of scope
	}

	std::cout << "\n=== Parameterized Constructor Tests ===" << std::endl;
	{
		// Test parameterized constructor
		ScavTrap scavNamed("Scavvy");
		scavNamed.attack("EnemyTarget");
		scavNamed.takeDamage(120); // Test taking more damage than hit points
		scavNamed.beRepaired(50);  // Try repairing when dead
		scavNamed.guardGate();
	}

	std::cout << "\n=== Copy Constructor and Assignment Tests ===" << std::endl;
	{
		// Copy constructor test
		ScavTrap originalScav("OriginalScav");
		ScavTrap copiedScav(originalScav); // Copy constructor
		copiedScav.attack("CopyTarget");
		copiedScav.guardGate();

		// Assignment operator test
		ScavTrap assignedScav;
		assignedScav = originalScav; // Assignment operator
		assignedScav.attack("AssignedTarget");
		assignedScav.guardGate();
	}

	std::cout << "\n=== Polymorphism Tests ===" << std::endl;
	{
		// Test polymorphism with ClapTrap pointer
		ClapTrap *polyScav = new ScavTrap("PolyScav");
		polyScav->attack("PolyTarget"); // Should call ScavTrap's attack
		polyScav->takeDamage(20);
		polyScav->beRepaired(10);
		delete polyScav; // Proper destruction chaining: ScavTrap -> ClapTrap
	}

	std::cout << "\n=== Edge Case Tests ===" << std::endl;
	{
		// Test energy exhaustion
		ScavTrap energyExhausted("ExhaustedScav");
		for (int i = 0; i < 51; ++i) // Attempt more attacks than energy points
		{
			energyExhausted.attack("Target");
		}

		// Test guardGate multiple times
		ScavTrap guardingScav("GuardingScav");
		guardingScav.guardGate();
		guardingScav.guardGate(); // Try guarding again while already guarding

		// Test max repair
		ScavTrap maxRepairScav("MaxRepairScav");
		maxRepairScav.takeDamage(50);  // Reduce hit points
		maxRepairScav.beRepaired(200); // Exceed repair to test max hit points
	}

	std::cout << "\n=== Scoped Object Destruction Test ===" << std::endl;
	{
		ScavTrap scopedScav("ScopedScav");
	} // Destructor chain is called at the end of scope

	return 0;
}
