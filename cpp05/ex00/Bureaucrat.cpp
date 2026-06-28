/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:02:26 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/27 10:25:33 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() : name("Default"), grade(150){
    std::cout << "Bureaucrat default constructor called" << std::endl;
}   //构造函数里必须要检查grade
Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name){
    std::cout << "Bureaucrat parameterized constructor called" << std::endl;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    this->grade = grade;
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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat){
    out << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return out;
}