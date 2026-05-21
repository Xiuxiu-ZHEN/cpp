/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:08:02 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/28 21:37:19 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack(){
    std::cout << nameA << " attacks with their " << WeaponA.getType() << std::endl;
}

HumanA::HumanA(std::string nameA, Weapon &WeaponA) : nameA(nameA), WeaponA(WeaponA){}
HumanA::~HumanA(){}