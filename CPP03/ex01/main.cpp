/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/22 21:33:17 by root              #+#    #+#             */
/*   Updated: 2024/12/24 15:32:30 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	// ClapTrap clap("Clappy");
	ScavTrap scav("scav");
	// clap.attack("Target1");
	// clap.takeDamage(5);
	// clap.beRepaired(3);
	// clap.attack("Target2");
	// clap.takeDamage(10);
	// clap.beRepaired(5);
	// scav.takeDamage(1000);
	// scav.beRepaired(5);
	scav.attack("target");
	scav.attack("target");
	scav.attack("target");
	scav.attack("target");
	scav.guardGate();
	scav.guardGate();
	return 0;
}
