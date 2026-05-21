/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:12:32 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/25 22:10:55 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie *zombie;

	zombie = newZombie("Jack");
	zombie->announce();
	
	randomChump("Mike");
	delete zombie;
}

