/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 22:06:00 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/27 11:19:12 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP
# include <iostream>
# include <exception>
# include <string>

class Bureaucrat;// Forward declaration of Bureaucrat class

class Form{
    private:
        const std::string name;
        bool isSigned;
        const int gradeToSign;
        const int gradeToExecute;
    public:
        Form();
        Form(const Form &copy);
        Form &operator=(const Form &copy); 
        Form(std::string const name, int gradeToSign, int gradeToExecute);
        ~Form();   //to initialize const members and verify if too high or too low

        std::string const getName() const;
        bool getIsSigned() const;//return 0/1 for unsigned/signed
        int getGradeToSign() const;
        int getGradeToExecute() const;
        void beSigned(const Bureaucrat &bureaucrat);

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
};

std::ostream &operator<<(std::ostream &out, const Form &form);

#endif