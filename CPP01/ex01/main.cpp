/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:43:49 by hlyshchu          #+#    #+#             */
/*   Updated: 2024/12/19 14:53:05 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <string>
#include <iostream>

Zombie* zombieHorde( int N, std::string name );

int main() {
    int N = 5;
    std::string name = "Walker";

    Zombie* horde = zombieHorde(N, name);

    for (int i = 0; i < N; ++i) {
        horde[i].announce();
        std::cout << std::endl;
    }
    delete[] horde;
    return 0;
}
