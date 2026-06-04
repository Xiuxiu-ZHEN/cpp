/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:39:22 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/22 19:18:03 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void){
    ClapTrap a("A");
    ClapTrap b("B");
    ClapTrap c(a);

    a.attack("B");
    b.takeDamage(0);
    b.takeDamage(5);
    b.beRepaired(3);
    b.attack("A");
    a.takeDamage(0);
    a.takeDamage(5);
    a.beRepaired(3);
    c.attack("B");
    b.takeDamage(0);
    b.takeDamage(5);
    b.beRepaired(3);

    return 0;
}