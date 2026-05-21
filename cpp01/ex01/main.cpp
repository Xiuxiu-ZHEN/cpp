/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 21:53:46 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/27 20:04:46 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(){
    int n = 100;
    Zombie* Zombies;
    
    Zombies = zombieHorde(n, "sketch");
    if (Zombies == NULL)
        return(1);
    for (int i = 0; i < n; i++)  
        Zombies[0].announce();
    delete []Zombies;
}