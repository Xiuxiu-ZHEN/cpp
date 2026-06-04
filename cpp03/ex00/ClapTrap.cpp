/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/21 19:39:30 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/22 23:35:46 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap():name("Default_ClapTrap"), hitpoints(10), energypoints(10), attackdamage(0){
    std::cout << "Default ClapTrap '" << this->name << "' has been created!" << std::endl;
}

ClapTrap::ClapTrap(std::string name):name(name), hitpoints(10), energypoints(10), attackdamage(0){
    std::cout << "ClapTrap '" << name << "' has been created" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& other): name(other.name), hitpoints(other.hitpoints), energypoints(other.energypoints), attackdamage(other.attackdamage){
    std::cout << "ClapTrap '" << other.name << "' has been copied" << std::endl;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other){
    std::cout << "ClapTrap '" << other.name << "' has been assigned" << std::endl;
    if (this != &other) {
        this->name = other.name;
        this->hitpoints = other.hitpoints;
        this->energypoints = other.energypoints;
        this->attackdamage = other.attackdamage;
    }
    return *this;
}

ClapTrap::~ClapTrap(){
    std::cout << "ClapTrap '" << name << "' has been destroyed" << std::endl;
}

/* ------------------------------- FUNCTIONS -------------------------------- */

void ClapTrap::attack(const std::string& target){
    if (this->energypoints <=0){
        std::cout << "ClapTrap '" << this->name << "' has no energy to attack!" << std::endl;
        return;
    }
    if (this->hitpoints <=0){
        std::cout << "ClapTrap '" << this->name << "' is already dead and cannot attack!" << std::endl;
        return;
    }
    this->energypoints -= 1;
    std::cout << "ClapTrap '" << this->name << "' attacks " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(this->hitpoints == 0){// Death check  
        std::cout << "Stop attacking! ClapTrap '" << this->name << "' is already dead!" << std::endl;
        return;
    }
    if (this->hitpoints > amount){// Alive check
        this->hitpoints -= amount;
        std::cout << "ClapTrap '" << this->name << "' takes " << amount << " points of damage!" << std::endl;
    }
    else{//  0 < HP <= amount of damage
        this->hitpoints = 0;//HP cannot be negative
        std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage and dies!" << std::endl;
    }
}
void ClapTrap::beRepaired(unsigned int amount){
    if (this->energypoints <= 0){//EP check
        std::cout << "ClapTrap '" << this->name << "' has no energy to repair!" << std::endl;
        return;
    }
    if(this->hitpoints <=0){//HP check
        std::cout << "ClapTrap '" << this->name << "' is already dead and cannot be repaired!" << std::endl;
        return;
    }
    this->energypoints -= 1;
    this->hitpoints += amount;
    std::cout << "ClapTrap '" << this->name << "' is repaired by " << amount << " points!" << std::endl;
}

