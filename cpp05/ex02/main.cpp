/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 22:35:40 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/27 23:06:59 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(){
    try{
        Bureaucrat b1("Alice", 1);
        Bureaucrat b2("Bob", 150);
        std::cout << b1 << std::endl;
        std::cout << b2 << std::endl;

        ShrubberyCreationForm f1("home");
        RobotomyRequestForm f2("Bender");
        PresidentialPardonForm f3("Marvin");

        std::cout << f1 << std::endl;
        std::cout << f2 << std::endl;
        std::cout << f3 << std::endl;
        std::cout << "--------test 1-----------" << std::endl;
        b1.signForm(f1);//Alice can sign 3 forms
        b1.signForm(f2);//can
        b1.signForm(f3);//can
        std::cout << "--------test 2-----------" << std::endl;
        b1.executeForm(f1);//Alice can execute 3 forms
        b1.executeForm(f2);//can
        b1.executeForm(f3);//
        std::cout << "--------test 3-----------" << std::endl;
        b2.signForm(f1);//Bob can't sign any form 
        b2.executeForm(f1);//Bob can't excute any form
    }
    catch (std::exception &e){
        std::cerr << "Exception: " << e.what() << std::endl;
    }
    return 0;
}
