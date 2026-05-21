/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/27 20:33:26 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/27 20:55:25 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(){
    std::string a = "HI THIS IS BRAIN";
    std::string* stringPTR = &a;
    std::string& stringREF = a; 
    
    std::cout << "--- Addresses ---" << std::endl;
    std::cout << "Memory address of the string: " << &a << std::endl;
    std::cout << "Memory address held by stringPTR: " << stringPTR << std::endl;
    std::cout << "Memory address held by stringREF: " << &stringREF << std::endl;

    std::cout << "--- Values ---" << std::endl;
    std::cout << "Value of the string: " << a << std::endl;
    std::cout << "Value pointed to by stringPTR: " << *stringPTR << std::endl;
    std::cout << "Value pointed to by stringREF: " << stringREF << std::endl;

}