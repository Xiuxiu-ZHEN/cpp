/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:02:26 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/10 18:44:28 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){
    std::cout << "Bureaucrat default constructor called" << std::endl;
}
Bureaucrat::Bureaucrat(const Bureaucrat &copy) : name(copy.name), grade(copy.grade){
    std::cout << "Bureaucrat copy constructor called" << std::endl;
}
Bureaucrat &Bureaucrat::operator=(const Bureaucrat &copy){
    std::cout << "Bureaucrat copy assignment operator called" << std::endl;
    if (this != &copy)
        this->grade = copy.grade;
    return *this;
}
Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name){
    std::cout << "Bureaucrat parameterized constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
}
Bureaucrat::~Bureaucrat(){
    std::cout << "Bureaucrat destructor called" << std::endl;
}
/* --------------------------- FONCTIONS MEMBRES ---------------------------- */

std::string const Bureaucrat::getName() const{
    return this->name;
}
int Bureaucrat::getGrade() const{
    return this->grade;
}

void Bureaucrat::gradeIncrement(){
    if (grade - 1 < 1)
        throw Bureaucrat::GradeTooHighException();
    this->grade--;
}

void Bureaucrat::gradeDecrement(){
    if (grade + 1 > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade++;
}

//new function signForm
void Bureaucrat::signForm(AForm &form) const{
    try{
        form.beSigned(*this);
        std::cout << this->name << " signed " << form.getName() << std::endl;
    }
    catch (std::exception &e){
        std::cout << this->name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
    }
}
//new function executeForm
void Bureaucrat::executeForm(AForm const &form) const{
    try{
        form.execute(*this);
        std::cout << this->name << " executed " << form.getName() << std::endl;
    }
    catch (std::exception &e){
        std::cout << this->name << " couldn't execute " << form.getName() << " because " << e.what() << std::endl;
    }
}
std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}

