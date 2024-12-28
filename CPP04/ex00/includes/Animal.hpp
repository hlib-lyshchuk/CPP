/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:03:26 by root              #+#    #+#             */
/*   Updated: 2024/12/28 13:18:32 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <string>

class Animal
{
protected:
	std::string type;

public:
	Animal();
	Animal(const Animal &copy);

	Animal &operator=(const Animal &src);

	virtual ~Animal();

	virtual void makeSound(void) const;

	virtual std::string getType(void) const;
};