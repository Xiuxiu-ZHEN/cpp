/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:39:22 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 03:30:46 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void) {
    FragTrap frag("A");

    frag.attack("B");// should use ClapTrap's attack with FragTrap's damage (30)
    frag.takeDamage(40);// should use ClapTrap's takeDamage
    frag.beRepaired(20);// should use ClapTrap's beRepaired
    frag.highFivesGuys();// should use FragTrap's highFivesGuys

    frag.takeDamage(100);// should die
    frag.highFivesGuys();// should fail due to death status

    // Test Orthodox Canonical Form
    FragTrap frag2("C");
    FragTrap frag3(frag2); // Copy constructor test
    FragTrap frag4("D");
    frag4 = frag2;

    // virtual destructor test
    ClapTrap *virtual_test = new FragTrap("Virtual_Test");
    delete virtual_test;

    return 0;
}