/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:58:40 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/10 22:20:27 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", 25, 5), target(target){
    std::cout << "PresidentialPardonForm parameterized constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy)
    : AForm(copy), target(copy.target){
    std::cout << "PresidentialPardonForm copy constructor called" << std::endl;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &copy){
    std::cout << "PresidentialPardonForm copy assignment operator called" << std::endl;
    if (this != &copy)
    {
        AForm::operator=(copy);
        // target is const and cannot be reassigned here
    }
    return *this;
}

PresidentialPardonForm::~PresidentialPardonForm(){
    std::cout << "PresidentialPardonForm destructor called" << std::endl;
}

/* --------------------------- FONCTIONS MEMBRES ---------------------------- */

std::string const PresidentialPardonForm::getTarget() const{
    return this->target;
}

void PresidentialPardonForm::executeAction() const{
    std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

