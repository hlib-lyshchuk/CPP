/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:07:09 by hlyshchu          #+#    #+#             */
/*   Updated: 2024/12/20 16:32:30 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed(const Fixed &other)
{
    std::cout << "Copy constructor called" << std::endl; 
    value = other.value;
}

Fixed &Fixed::operator=(const Fixed &other) 
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &other)
    {
        value = other.value;
    }
    return *this;
}

Fixed::Fixed(): value(0)
{
    std::cout << "Constructor called" << std::endl; 
}
Fixed::~Fixed() 
{
    std::cout << "Destructor called" << std::endl; 
}

int Fixed::getRawBits(void) const 
{
    std::cout << "getRawBits function called" <<std::endl;
    return value;
}

void Fixed::setRawBits(int const raw) 
{
    std::cout << "setRawBits function called" <<std::endl;
    value = raw;
}
