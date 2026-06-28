/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:48:35 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/13 22:06:47 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "Bureaucrat.hpp"
#include <fstream>
//调用基类AForm的构造函数,初始化sign和execute等级,初始化自己的target
ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137), target(target){
    std::cout << "ShrubberyCreationForm parameterized constructor called" << std::endl;
}
//调用基类AForm的复制构造函数,初始化自己的target
ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy)
    : AForm(copy), target(copy.target){
    std::cout << "ShrubberyCreationForm copy constructor called" << std::endl;
}
//调用基类AForm的赋值运算符,赋值自己的target
ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &copy){
    std::cout << "ShrubberyCreationForm copy assignment operator called" << std::endl;
    if (this != &copy){
        AForm::operator=(copy);//调用基类AForm的赋值运算符,赋值自己的target
    }//target是const,不能被赋值,只能在初始化列表中初始化
    return *this;
}
ShrubberyCreationForm::~ShrubberyCreationForm(){
    std::cout << "ShrubberyCreationForm destructor called" << std::endl;
}

/* --------------------------- FONCTIONS MEMBRES ---------------------------- */

std::string const ShrubberyCreationForm::getTarget() const{
    return this->target;
}

void ShrubberyCreationForm::executeAction() const{
    std::string filename = this->target + "_shrubbery";
    std::ofstream ofs(filename.c_str());
    if (!ofs)
        throw std::ios_base::failure("Cannot open or create the shrubbery file.");

    ofs << "      /\\      \n"
        << "     /  \\     \n"
        << "    /++++\\    \n"
        << "   /  ()  \\   \n"
        << "  /        \\  \n"
        << " /~`~`~`~`~`\\ \n"
        << "      ||       \n"
        << "      ||       \n"
        << "      ||       \n";
}

