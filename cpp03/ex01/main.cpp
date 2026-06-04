/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:39:22 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 02:10:38 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void) {
    ScavTrap scav("A");

    scav.attack("B");//should use ScavTrap's attack
    scav.takeDamage(40);//should use ClapTrap's takeDamage
    scav.beRepaired(20);//should use ClapTrap's beRepaired
    scav.guardGate();//should use ScavTrap's guardGate
    
    /*ClapTrap *virtual_test = new ScavTrap("C");
    delete virtual_test;*/
      
    return 0;
}
