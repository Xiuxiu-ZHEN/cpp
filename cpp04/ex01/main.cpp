/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 16:29:25 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 22:12:03 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "Brain.hpp"

int main()
{   
    std::cout << "--------------1:basic test---------------------" << std::endl;
    
    const Animal* j = new Dog();
    const Animal* i = new Cat();
    delete j;
    delete i;

    std::cout << "--------------2:press test---------------------" << std::endl;
    
    const int size = 4;
    Animal* animals[size];

    for (int idx = 0; idx < size; idx++){
        if (idx < size / 2)
            animals[idx] = new Dog();// first half dogs
        else
            animals[idx] = new Cat();// second half cats
    }

    for (int idx = 0; idx < size; idx++)
        delete animals[idx];

    std::cout << "-------------3:deep copy test----------------------" << std::endl;
    
    Dog original;
    Dog clone(original);
    
    std::cout << "Original Brain: " << original.getBrain() << std::endl;
    std::cout << "Clone Brain: " << clone.getBrain() << std::endl;

    return 0;
}
