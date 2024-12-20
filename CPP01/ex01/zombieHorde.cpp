/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/19 14:36:38 by hlyshchu          #+#    #+#             */
/*   Updated: 2024/12/19 16:55:29 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name )
{
    if(N < 1)
        return(NULL);
    Zombie  *horde = new Zombie[N];
    for(int i = 0; i < N; i++)
        horde[i].setName(name);
    return(horde);
}
