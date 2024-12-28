/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/26 20:08:25 by root              #+#    #+#             */
/*   Updated: 2024/12/28 13:14:00 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include "Animal.hpp"
#include <string>

class Cat : public Animal
{
private:
public:
	Cat();
	Cat(const Cat &copy);
	Cat &operator=(const Cat &src);
	~Cat();
	void makeSound(void) const;
};
