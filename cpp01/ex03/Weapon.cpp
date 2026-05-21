/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 19:06:41 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/28 21:38:49 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const{
    return(type);
}
void Weapon::setType(std::string type2){
    type = type2;
}

Weapon::Weapon(std::string type):type(type){}
Weapon::~Weapon(){}  