/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 22:47:41 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/28 13:20:54 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(){
    std::cout << "Intern default constructor called" << std::endl;
}
Intern::Intern(const Intern &copy){
    std::cout << "Intern copy constructor called" << std::endl;
    (void)copy;//我知道这里没用上 copy，我是故意不用的
}
Intern &Intern::operator=(const Intern &copy){
    std::cout << "Intern copy assignment operator called" << std::endl;
    (void)copy;
    return *this;
}
Intern::~Intern(){
    std::cout << "Intern destructor called" << std::endl;
}
/* ---------------------------PRIVATE FONCTIONS MEMBRES ---------------------------- */
AForm *Intern::createShrubbery(std::string target) {
    return new ShrubberyCreationForm(target);
}//向上转型（Upcasting）, 返回类型是父类指针AForm *，但里面真正new出来的却是子类对象ShrubberyCreationForm(target)。
//实现接口的绝对统一
AForm *Intern::createRobotomy(std::string target) {
    return new RobotomyRequestForm(target);
}

AForm *Intern::createPresidential(std::string target) {
    return new PresidentialPardonForm(target);
}
/* --------------------------- PUBLIC FONCTIONS MEMBRES ---------------------------- */
AForm *Intern::makeForm(std::string formName, std::string target){
    std::string formTypes[3] = {
        "shrubbery creation",
        "robotomy request",
        "presidential pardon"
    };
    AForm *(Intern::*formFunctions[3])(std::string) = {
        &Intern::createShrubbery,//数组存了三个指针地址
        &Intern::createRobotomy,//指向Intern的三个成员函数
        &Intern::createPresidential//这些成员函数必须接受string作参数,返回AForm *
    };
    for (int i = 0; i < 3; i++)
    {
        if (formName == formTypes[i])
        {   
            std::cout << "Intern creates " << formName << std::endl;
            return (this->*formFunctions[i])(target);
        }    //调用三个指针Intern::createShrubbery,指向三个类return new ShrubberyCreationForm,并把target给它作参数
    }
     
    std::cout << "Error: Intern cannot create form '" << formName << "' because it doesn't exist." << std::endl;
    return NULL;                                                       //说明外面传进来的字符串是瞎写
}