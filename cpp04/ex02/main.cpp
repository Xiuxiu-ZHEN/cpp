/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:29:25 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 22:08:20 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{   
    std::cout << "--------------1:basic test---------------------" << std::endl;
    const Animal* j = new Dog();//son complete himself with his own makeSound 
    const Animal* i = new Cat();
    
    j->makeSound();
    i->makeSound();
    
    delete j;
    delete i;
    
    std::cout << "--------------2:press test---------------------" << std::endl;

    //Animal test; 

    return 0;
}