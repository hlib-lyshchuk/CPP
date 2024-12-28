/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: root <root@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/28 13:07:12 by root              #+#    #+#             */
/*   Updated: 2024/12/28 13:21:47 by root             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/Animal.hpp"
#include "../includes/Cat.hpp"
#include "../includes/Dog.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"
int main()
{
	std::cout << "--- Correct Animal Tests ---" << std::endl;
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;

	i->makeSound();	   // Cat sound
	j->makeSound();	   // Dog sound
	meta->makeSound(); // Unknown animal sound

	delete meta;
	delete j;
	delete i;

	std::cout << "--- Wrong Animal Tests ---" << std::endl;
	const WrongAnimal *metaWrong = new WrongAnimal();
	const WrongAnimal *wrongCat = new WrongCat();

	std::cout << wrongCat->getType() << " " << std::endl;

	wrongCat->makeSound();	// Wrong animal sound (not overridden due to no virtual in WrongAnimal)
	metaWrong->makeSound(); // Wrong animal sound

	delete metaWrong;
	delete wrongCat;

	return 0;
}
