/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 18:28:21 by root              #+#    #+#             */
/*   Updated: 2024/12/25 19:29:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "../includes/ClapTrap.hpp"
#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int main()
{
	std::cout << "=== FragTrap Default Constructor Test ===" << std::endl;
	FragTrap defaultFrag;
	defaultFrag.attack("DefaultTarget");
	defaultFrag.takeDamage(50);
	defaultFrag.beRepaired(40);
	defaultFrag.highFivesGuys();

	std::cout << "\n=== FragTrap Parameterized Constructor Test ===" << std::endl;
	FragTrap namedFrag("Fraggy");
	namedFrag.attack("Enemy");
	namedFrag.takeDamage(120); // Exceeds max hit points
	namedFrag.beRepaired(60);  // Attempt to repair after death
	namedFrag.highFivesGuys();

	std::cout << "\n=== FragTrap Copy Constructor Test ===" << std::endl;
	FragTrap copiedFrag(namedFrag);
	copiedFrag.attack("CopyTarget");
	copiedFrag.highFivesGuys();

	std::cout << "\n=== FragTrap Assignment Operator Test ===" << std::endl;
	FragTrap assignedFrag;
	assignedFrag = defaultFrag;
	assignedFrag.attack("AssignedTarget");
	assignedFrag.highFivesGuys();

	std::cout << "\n=== Scoped FragTrap Destructor Test ===" << std::endl;
	{
		FragTrap scopedFrag("ScopedFrag");
		scopedFrag.highFivesGuys();
	} // Destructor is called here

	return 0;
}
