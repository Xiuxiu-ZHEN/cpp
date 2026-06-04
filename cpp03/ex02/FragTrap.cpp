/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 02:24:18 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 03:07:00 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap("Default_FragTrap"){
    this->hitpoints = 100;
    this->energypoints = 100;
    this->attackdamage = 30;
    std::cout << "Default FragTrap '" << this->name << "' has been created!" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name){
    this->hitpoints = 100;
    this->energypoints = 100;
    this->attackdamage = 30;
    std::cout << "FragTrap '" << name << "' has been created" << std::endl;
}

FragTrap::FragTrap(const FragTrap &other): ClapTrap(other){
    std::cout << "FragTrap '" << other.name << "' has been copied" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap &other){
    if (this !=&other){
        ClapTrap::operator=(other);
        std::cout << "FragTrap '" << other.name << "' has been assigned" << std::endl;
    }
    return *this;
}

FragTrap::~FragTrap(){
    std::cout << "FragTrap '" << this->name << "' has been destroyed" << std::endl;
}

/* ------------------------------- FUNCTIONS -------------------------------- */

void FragTrap::highFivesGuys(void){
    if (this->hitpoints <=0){
        std::cout << "FragTrap '" << this->name << "' is already dead and cannot high five!" << std::endl;
        return;
    }
    std::cout << "FragTrap '" << this->name << "' is requesting a high five!🙌🙌" << std::endl;
}

