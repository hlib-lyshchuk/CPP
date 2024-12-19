/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:21:15 by hlyshchu          #+#    #+#             */
/*   Updated: 2024/12/19 20:10:06 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>
#include <string>

Weapon::Weapon() : type("None") {}
Weapon::Weapon(const std::string &type) : type(type) {}
Weapon::~Weapon() {}

const std::string &Weapon::getType(void) const
{
    return (type);
}

void Weapon::setType(const std::string &newType)
{
    type = newType;
}
