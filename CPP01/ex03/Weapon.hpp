/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:14:32 by hlyshchu          #+#    #+#             */
/*   Updated: 2024/12/19 15:26:03 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Weapon
{
private:
    std::string type;
public:
    Weapon();
    Weapon(std::string initType);
    ~Weapon();
    const std::string &getType(void) const;
    void setType(const std::string &newType);
};

