/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 21:07:29 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/29 15:53:37 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

#include <iostream>
#include <string>

int main(void)
{
    std::cout << "------ Empty Array ------" << std::endl;
    Array<int> empty;
    std::cout << "empty size = " << empty.size() << std::endl;

    std::cout << "\n------ Int Array ------" << std::endl;
    Array<int> numbers(5);

    for (unsigned int i = 0; i < numbers.size(); i++)
        numbers[i] = i * 10;

    for (unsigned int i = 0; i < numbers.size(); i++)
        std::cout << "numbers[" << i << "] = "
                  << numbers[i] << std::endl;

    std::cout << "\n------ String Array ------" << std::endl;
    Array<std::string> words(3);

    words[0] = "Hello";
    words[1] = "42";
    words[2] = "Paris";

    for (unsigned int i = 0; i < words.size(); i++)
        std::cout << words[i] << std::endl;

    std::cout << "\n------ Copy Constructor ------" << std::endl;

    Array<int> copy(numbers);

    copy[0] = 999;

    std::cout << "Original : " << numbers[0] << std::endl;
    std::cout << "Copy     : " << copy[0] << std::endl;

    std::cout << "\n------ Assignment Operator ------" << std::endl;

    Array<int> assigned;

    assigned = numbers;
    assigned[1] = 777;

    std::cout << "Original : " << numbers[1] << std::endl;
    std::cout << "Assigned : " << assigned[1] << std::endl;

    std::cout << "\n------ Exception Test ------" << std::endl;

    try{
        std::cout << numbers[42] << std::endl;
    }
    catch (const std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return (0);
}