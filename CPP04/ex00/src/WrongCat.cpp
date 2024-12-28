/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:10:39 by root              #+#    #+#             */
/*   Updated: 2024/12/28 13:12:46 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/WrongCat.hpp"
#include <string>
#include <iostream>

// Constructors
WrongCat::WrongCat() : WrongAnimal()
{
	this->type = "WrongCat";
	std::cout << "WrongCat default constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
}

// Deconstructors
WrongCat::~WrongCat()
{
	std::cout << "WrongCat destructor called" << std::endl;
}

// Overloaded Operators
WrongCat &WrongCat::operator=(const WrongCat &src)
{
	std::cout << "WrongCat assignment operator called" << std::endl;
	if (this == &src)
		return *this;

	this->type = src.type;
	return *this;
}

void WrongCat::makeSound(void) const
{
	std::cout << this->getType() << " says: **WrongCat sounds**" << std::endl;
}
