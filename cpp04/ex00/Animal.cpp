/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:34:17 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 19:31:21 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("Unknown Animal"){
    std::cout << "Unknown Animal default constructor called" << std::endl;
}

Animal::Animal(const Animal &other) : type(other.type){
    std::cout << "Unknown Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &other){
    std::cout << "Unknown Animal copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

Animal::~Animal(){
    std::cout << "Unknown Animal destructor called" << std::endl;
}   
// ------------Functions---
std::string Animal::getType() const{
    return this->type;
}

void Animal::makeSound() const{
    std::cout << "Unknown Animal makes a sound" << std::endl;
}



