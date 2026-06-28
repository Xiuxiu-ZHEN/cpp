/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/10 17:04:00 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/27 19:24:21 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AFORM_HPP
#define AFORM_HPP
#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        AForm();
        AForm(const AForm &copy);
        AForm &operator=(const AForm &copy); 
        AForm(std::string const name, int gradeToSign, int gradeToExecute);
        virtual ~AForm(); //1.let AForm be abstract           

        std::string const getName() const;
        bool getIsSigned() const;
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(Bureaucrat const &b);
        //2.new function execute
        void execute(Bureaucrat const &executor) const;

        class GradeTooHighException : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "Grade is too high";
                }
            };
        class GradeTooLowException : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "Grade is too low";
                }
            };
        class FormNotSignedException : public std::exception{//3.new exception alarm if the form hasn't been signed
            public:
                virtual const char* what() const throw(){
                    return "Form is not signed";
                }
            };

    protected:
        virtual void executeAction() const = 0;//4.to execute the concrete action
  
};

std::ostream &operator<<(std::ostream &out, const AForm &form);

#endif
