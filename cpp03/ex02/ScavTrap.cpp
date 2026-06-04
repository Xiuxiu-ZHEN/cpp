/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/22 19:29:29 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/22 23:53:51 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap("Default_ScavTrap"){
    this->hitpoints = 100;
    this->energypoints = 50;
    this->attackdamage = 20;
    std::cout << "Default ScavTrap '" << this->name << "' has been created!" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name){
    this->hitpoints = 100;
    this->energypoints = 50;
    this->attackdamage = 20;
    std::cout << "ScavTrap '" << this->name << "' has been created" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &other) : ClapTrap(other){
    std::cout << "ScavTrap '" << other.name << "' has been copied" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &other){
    if (this !=&other){
        ClapTrap::operator=(other);
        std::cout << "ScavTrap '" << other.name << "' has been assigned" << std::endl;
    }
    return *this;
}

ScavTrap::~ScavTrap(){
    std::cout << "ScavTrap '" << this->name << "' has been destroyed" << std::endl;
}

/* ------------------------------- FUNCTIONS -------------------------------- */

void ScavTrap::attack(const std::string& target){
    if (this->energypoints <=0){
        std::cout << "ScavTrap '" << this->name << "' has no energy to attack!" << std::endl;
        return;
    }
    if (this->hitpoints <=0){
        std::cout << "ScavTrap '" << this->name << "' is already dead and cannot attack!" << std::endl;
        return;
    }
    this->energypoints -= 1;
    std::cout << "ScavTrap '" << this->name << "' attacks " << target << ", causing " << this->attackdamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate(){
    std::cout << "ScavTrap '" << this->name << "' is now guarding the gate!" << std::endl;
}