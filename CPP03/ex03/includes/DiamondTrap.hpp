/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 10:56:30 by root              #+#    #+#             */
/*   Updated: 2024/12/26 11:28:41 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClapTrap.hpp"

class DiamondTrap : public ScavTrap, public FragTrap
{
private:
	std::string name;

public:
	DiamondTrap();

	DiamondTrap(std::string name);

	DiamondTrap(const DiamondTrap &copy);

	DiamondTrap &operator=(const DiamondTrap &src);

	virtual ~DiamondTrap();

	void attack(const std::string &target);
	void whoAmI(void);
};