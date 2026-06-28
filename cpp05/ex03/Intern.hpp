/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 22:47:38 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/28 13:11:11 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
#define INTERN_HPP
#include "AForm.hpp"

class Intern{
    private:
        AForm *createShrubbery(std::string target);
        AForm *createRobotomy(std::string target);
        AForm *createPresidential(std::string target);
    public:
        Intern();
        Intern(const Intern &copy);
        Intern &operator=(const Intern &copy);
        ~Intern();
        
        AForm *makeForm(std::string formName, std::string target);
};      //makeForm("robotomy request", "Bender")相当于new RobotomyRequestForm("Bender")
#endif