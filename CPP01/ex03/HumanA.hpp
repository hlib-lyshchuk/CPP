/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:27:11 by hlyshchu          #+#    #+#             */
/*   Updated: 2024/12/19 15:30:41 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>
#include "Weapon.hpp"

class HumanA
{
private:
    std::string name;
    Weapon weapon;

public:
    HumanA(std::string initName, Weapon initWeapon);
    ~HumanA();
    void attack (void);
};

HumanA::HumanA(std::string initName, Weapon initWeapon) 
    : name{initName}, weapon{ini}
{

}

HumanA::~HumanA()
{
}
