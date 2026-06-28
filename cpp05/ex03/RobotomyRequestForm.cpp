/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:58:45 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/13 22:17:16 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include "Bureaucrat.hpp"
#include <cstdlib>//rand,srand
#include <ctime>//time

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45), target(target){
    std::cout << "RobotomyRequestForm parameterized constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy)
    : AForm(copy), target(copy.target){
    std::cout << "RobotomyRequestForm copy constructor called" << std::endl;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &copy){
    std::cout << "RobotomyRequestForm copy assignment operator called" << std::endl;
    if (this != &copy){
        AForm::operator=(copy);
    }
    return *this;
}

RobotomyRequestForm::~RobotomyRequestForm(){
    std::cout << "RobotomyRequestForm destructor called" << std::endl;
}

/* --------------------------- FONCTIONS MEMBRES ----------------------------*/

std::string const RobotomyRequestForm::getTarget() const{
    return this->target;
}

void RobotomyRequestForm::executeAction() const{
    std::cout << "* VRRROOOOM VRRROOOOM *" << std::endl;
    static bool seed = false;
    if (!seed){
        std::srand(std::time(NULL));//only once 
        seed = true;
    }
    if (std::rand() % 2 == 0)
        std::cout << this->target << " has been robotomized successfully." << std::endl;
    else
        std::cout << "Robotomy failed on " << this->target << "." << std::endl;
}

