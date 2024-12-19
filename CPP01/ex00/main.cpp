/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 12:36:04 by root              #+#    #+#             */
/*   Updated: 2024/12/19 16:50:00 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie *newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
	std::cout << "=== Creating a Zombie on the Heap ===" << std::endl;
	Zombie *heapZombie = newZombie("HeapZombie");
	heapZombie->announce();
	delete heapZombie;

	std::cout << "\n=== Creating a Zombie on the Stack ===" << std::endl;
	randomChump("StackZombie");

	std::cout << "\n=== Program End ===" << std::endl;
	return 0;
}
