/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:40:34 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 21:45:08 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal(), brain(new Brain()){
    this->type = "Dog";
    std::cout << "Dog default constructor called" << std::endl;
}

Dog::Dog(const Dog &other) : Animal(other), brain(new Brain(*other.brain)){
    std::cout << "Dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &other){//deep copy
    std::cout << "Dog copy assignment operator called" << std::endl;
    if (this != &other)
        Animal::operator=(other);
    if (this->brain)  //if left has a brain
        delete this->brain;  //delete it
    if (other.brain)  //if right has a brain
        this->brain = new Brain(*other.brain);  //deep copy
    else
        this->brain = NULL; //if right has no brain, left should have no brain either
    return *this;
}

Dog::~Dog(){
    std::cout << "Dog destructor called" << std::endl;
    delete this->brain;
}   
// ------------Functions---
void Dog::makeSound() const {
    std::cout << "Wannnnnnnnnnnnnnnnnnnnnnng!" << std::endl;
}

Brain* Dog::getBrain() const {
    return this->brain;
}
