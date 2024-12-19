/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 15:14:32 by hlyshchu          #+#    #+#             */
/*   Updated: 2024/12/19 20:09:18 by root             ###   ########.fr       */
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
    Weapon(const std::string &type);
    ~Weapon();
    const std::string &getType(void) const;
    void setType(const std::string &newType);
};
