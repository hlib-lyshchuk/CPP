/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/25 19:17:29 by root              #+#    #+#             */
/*   Updated: 2024/12/25 19:29:16 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap
{
private:
	static const unsigned int MAX_HIT_POINTS = 100;
	static const unsigned int MAX_ENERGY = 100;

public:
	// constructor
	FragTrap();
	FragTrap(std::string scav_name);
	// copy constructor
	FragTrap(const FragTrap &copy);
	// copy assignment operator
	FragTrap &operator=(const FragTrap &src);
	// destructor
	~FragTrap();
	// public methods
	void highFivesGuys(void);
};
