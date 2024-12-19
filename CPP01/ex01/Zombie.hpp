/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:21:01 by root              #+#    #+#             */
/*   Updated: 2024/12/19 14:51:12 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Zombie
{
private:
	std::string name;

public:
	Zombie(std::string name);
	Zombie();
	~Zombie();
	void announce(void);
	void setName(std::string &name);
};
