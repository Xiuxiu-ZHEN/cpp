/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:02:24 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/27 17:28:16 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include <string>

class AForm;// Forward declaration of AForm class

class  Bureaucrat{
    private:
        std::string const name;
        int grade;
    public:
        Bureaucrat();
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat &operator=(const Bureaucrat &copy);
        Bureaucrat(std::string const name, int grade);
        ~Bureaucrat();

        std::string const getName() const;
        int getGrade() const;
        void gradeIncrement();
        void gradeDecrement();
        //1.new fonuction signForm and 2.executeForm
        void signForm(AForm &form) const;
        void executeForm(AForm const &form) const;

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif