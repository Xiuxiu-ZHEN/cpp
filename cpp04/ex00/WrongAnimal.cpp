/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:40:19 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 19:35:50 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("Unknown WrongAnimal"){
    std::cout << "Unknown WrongAnimal default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &other) : type(other.type){
    std::cout << "Unknown WrongAnimal copy constructor called" << std::endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &other){
    std::cout << "Unknown WrongAnimal copy assignment operator called" << std::endl;
    if (this != &other) {
        this->type = other.type;
    }
    return *this;
}

WrongAnimal::~WrongAnimal(){
    std::cout << "Unknown WrongAnimal destructor called" << std::endl;
}

// ------------Functions---
std::string WrongAnimal::getType() const{
    return this->type;
}

void WrongAnimal::makeSound() const{
    std::cout << "Unknown WrongAnimal makes a sound" << std::endl;
}
