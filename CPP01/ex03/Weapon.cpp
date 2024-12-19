/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:21:15 by hlyshchu          #+#    #+#             */
/*   Updated: 2024/12/19 15:26:54 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon(): type{"None"}{}
Weapon::Weapon(std::string initType): type{initType} {}
Weapon::~Weapon(){}

const std::string &Weapon::getType(void) const 
{ 
    return(type); 
}

void Weapon::setType(const std::string &newType)
{
    type = newType;
}
