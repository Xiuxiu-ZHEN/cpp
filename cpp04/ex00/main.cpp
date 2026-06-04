/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:29:25 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 20:35:18 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void){
    std::cout << "----------Dynamic Binding-------------------" << std::endl;
    const Animal* meta = new Animal();//allocate memory for Animal, Dog, Cat
    const Animal* j = new Dog();//then give the 3 pointers to meta, j, i 
    const Animal* i = new Cat();
    
    std::cout << j->getType() << "!" << std::endl;//we are different types
    std::cout << i->getType() << "!" << std::endl;
    
    i->makeSound();//with virtual, call the correction function in Cat, not the one in Animal
    j->makeSound();
    meta->makeSound();
    
    std::cout << "----------Virtual Destructor-------------------" << std::endl;
    delete meta;
    delete j;
    delete i;

    std::cout << "----------Static Binding-------------------" << std::endl;
    const WrongAnimal* wrong_meta = new WrongAnimal();
    const WrongAnimal* wrong_cat = new WrongCat();
    std::cout << wrong_cat->getType() << "!" << std::endl;
      
    wrong_meta->makeSound();
    wrong_cat->makeSound();//cannot call makeSond of the son-class without vitual
  

    delete wrong_meta;
    delete wrong_cat;//cannot call destructor of the son-class without vitual

    std::cout << "----------Copy Constructor-------------------" << std::endl;
    Dog dog;
    std::cout << "Type: " << dog.getType() << std::endl;
    dog.makeSound();

    Dog copy(dog);
    copy.makeSound();
    
    return 0;
}