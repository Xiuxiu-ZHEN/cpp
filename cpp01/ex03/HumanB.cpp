/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:43:57 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/28 21:37:24 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack(){
    std::cout << nameB << " attacks with their " << WeaponB->getType() << std::endl;
}
void HumanB::setWeapon(Weapon &WeaponC){
    WeaponB = &WeaponC;
}
HumanB::HumanB(std::string nameB) : nameB(nameB), WeaponB(NULL){}
HumanB::~HumanB(){}