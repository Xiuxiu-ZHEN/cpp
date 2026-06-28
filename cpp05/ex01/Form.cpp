/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 22:06:03 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/09 22:44:59 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form() : name("Default"), isSigned(false), gradeToSign(150), gradeToExecute(150){
    std::cout << "Form default constructor called" << std::endl;
}
Form::Form(const Form &copy) : name(copy.name), isSigned(copy.isSigned), gradeToSign(copy.gradeToSign), gradeToExecute(copy.gradeToExecute){
    std::cout << "Form copy constructor called" << std::endl;
}
Form::Form(std::string const name, int gradeToSign, int gradeToExecute) : name(name), isSigned(false), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute){
    std::cout << "Form parameterized constructor called" << std::endl;
    if (gradeToSign < 1 || gradeToExecute < 1)
        throw Form::GradeTooHighException();
    if (gradeToSign > 150 || gradeToExecute > 150)
        throw Form::GradeTooLowException();
}
Form &Form::operator=(const Form &copy){
    std::cout << "Form copy assignment operator called" << std::endl;
    if (this != &copy)
        this->isSigned = copy.isSigned;
    return *this;
}
Form::~Form(){
    std::cout << "Form destructor called" << std::endl;
}
/* --------------------------- FONCTIONS MEMBRES ---------------------------- */
std::string const Form::getName() const{
    return this->name;
}
bool Form::getIsSigned() const{
    return this->isSigned;
}
int Form::getGradeToSign() const{
    return this->gradeToSign;
}
int Form::getGradeToExecute() const{
    return this->gradeToExecute;
}
void Form::beSigned(const Bureaucrat &bureaucrat){
    if (bureaucrat.getGrade() <= this->gradeToSign)
        this->isSigned = true;
    else
        throw Form::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &out, const Form &form){
    out << "Form " << form.getName() << ", signed: " << form.getIsSigned() << ", sign grade: " << form.getGradeToSign() << ", execute grade: " << form.getGradeToExecute() << std::endl;
    return out;
}