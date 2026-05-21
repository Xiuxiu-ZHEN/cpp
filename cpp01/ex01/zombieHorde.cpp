/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 20:25:12 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/26 21:53:30 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    
    if (N <= 0)
        return NULL;
    Zombie* Zombies = new Zombie[N];
    for(int i = 0; i < N; i++)
        Zombies[i].set_name(name);
    return Zombies;
}