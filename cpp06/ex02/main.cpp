/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 19:47:36 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/28 21:08:33 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <exception>
//generate A/B/C randomly
Base* generate(void){
    int r = std::rand() % 3;

    if (r == 0)
        return new A;
    else if (r == 1)
        return new B;
    else
        return new C;
}
//identify p's real type with pointer which can be null
void identify(Base* p){
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
		std::cout << "Type unknown" << std::endl;
}
//identify p's real type with reference which can't be null
void identify(Base& p){
    try{
        (void)dynamic_cast<A&>(p);//void because we didn't use the returned value of dynamic_cast
        std::cout << "A" << std::endl;
        return;
    }
    catch(...){}
    try{
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
        return;
    }
    catch(...){}
    try{
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
        return;
    }
    catch(...){}
    std::cout << "Type unknown" << std::endl;
}

int main(void){

    std::srand(std::time(NULL));
    Base* obj = generate();

    std::cout << "Pointer identify: ";
    identify(obj);
    std::cout << std::endl;

    std::cout << "Reference identify: ";
    identify(*obj);
    std::cout << std::endl;

    delete obj;
    return 0;
}