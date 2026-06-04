/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:40:40 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 21:55:22 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal(), brain(new Brain()){
    this->type = "Cat";
    std::cout << "Cat default constructor called" << std::endl;
}

Cat::Cat(const Cat &other) : Animal(other), brain(new Brain(*other.brain)){
    std::cout << "Cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &other){
    std::cout << "Cat copy assignment operator called" << std::endl;
    if (this != &other){
        
        Animal::operator=(other);//son copied from father but didn't copy brain beacuse father has no brain 
        
        if (this->brain)  //if left has a brain
            delete this->brain;  //delete it
        if (other.brain)  //if right has a brain
            this->brain = new Brain(*other.brain);  //deep copy
        else //if right and left have no brain
            this->brain = NULL;
    }
    return *this;
}

Cat::~Cat(){
    std::cout << "Cat destructor called" << std::endl;
    delete this->brain;
}   
// ------------Functions---
void Cat::makeSound() const {
    std::cout << "Meow!" << std::endl;
}

Brain* Cat::getBrain() const {
    return this->brain;
}
