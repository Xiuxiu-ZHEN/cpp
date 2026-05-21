/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 18:34:44 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/03 20:28:06 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void){
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger." << std::endl
    << "I really do!" << std::endl;
}

void Harl::info(void){
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money." << std::endl
    << "You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void){
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free." << std::endl
    << "I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void){
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level){
    struct Level{
        std::string levelname;
        void (Harl::*levelpointer)();
    };
    Level levels[] = {
        {"DEBUG", &Harl::debug},//transfer these two datas to every structure in levels[]
        {"INFO", &Harl::info},
        {"WARNING", &Harl::warning},
        {"ERROR", &Harl::error},
    };
    for(int j = 0; j < 4; j++)
    {
        if(level == levels[j].levelname)
            (this->*levels[j].levelpointer)();
    }
}

Harl::Harl(){}
Harl::~Harl(){}