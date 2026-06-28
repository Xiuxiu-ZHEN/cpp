/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:03:56 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/27 22:36:16 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150){
    std::cout << "AForm default constructor called" << std::endl;
}
AForm::AForm(const AForm &copy) : name(copy.name), isSigned(copy.isSigned), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute){
    std::cout << "AForm copy constructor called" << std::endl;
}
AForm::AForm(std::string const name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
    std::cout << "AForm parameterized constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw AForm::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw AForm::GradeTooLowException();
}
AForm &AForm::operator=(const AForm &copy){
    std::cout << "AForm copy assignment operator called" << std::endl;
    if (this != &copy)
        this->isSigned = copy.isSigned;
    return *this;
}
AForm::~AForm(){//1.vitual
    std::cout << "AForm destructor called" << std::endl;
}
/* --------------------------- FONCTIONS MEMBRES ---------------------------- */
std::string const AForm::getName() const{
    return this->name;
}
bool AForm::getIsSigned() const{
    return this->isSigned;
}
int AForm::getGradeToSign() const{
    return this->gradeToSign;
}
int AForm::getGradeToExecute() const{
    return this->gradeToExecute;
}
void AForm::beSigned(const Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw AForm::GradeTooLowException();
}
//2.execute 3.executeAction 4.GradeTooLowException
void AForm::execute(Bureaucrat const &executor) const{//verify before execute a form
    if (!this->getIsSigned()) //verify if the form hasn't been signed yet
        throw AForm::FormNotSignedException();
    if (executor.getGrade() > this->getGradeToExecute())//bureaucrat has enough grade to execute the form
        throw AForm::GradeTooLowException();
    this->executeAction();
}

std::ostream &operator<<(std::ostream &out, const AForm &form){
    out << "AForm " << form.getName() << ", signed: " << form.getIsSigned() << ", sign grade: " << form.getGradeToSign() << ", execute grade: " << form.getGradeToExecute() << std::endl;
    return out;
}

