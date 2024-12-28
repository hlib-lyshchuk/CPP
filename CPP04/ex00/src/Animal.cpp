/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 12:58:26 by root              #+#    #+#             */
/*   Updated: 2024/12/28 13:18:18 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include <string>
#include <iostream>

Animal::Animal() : type("Unknown Animal")
{
	std::cout << "Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &copy)
{
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
}

Animal &Animal::operator=(const Animal &src)
{
	std::cout << "Animal assignment operator called" << std::endl;
	if (this == &src)
		return *this;
	this->type = src.type;
	return *this;
}

Animal::~Animal()
{
	std::cout << "Animal default destructor called" << std::endl;
}

void Animal::makeSound(void) const
{
	std::cout << "The animal doesn't make any sound." << std::endl;
}

std::string Animal::getType(void) const
{
	return (this->type);
}
