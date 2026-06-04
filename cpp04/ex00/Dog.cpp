/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:40:34 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 19:30:33 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(){
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other){
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other){
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
}   
// ------------Functions---
void Dog::makeSound() const {
    std::cout << "Wannnnnnnnnnnnnnnnnnnnnnng!" << std::endl;
}
