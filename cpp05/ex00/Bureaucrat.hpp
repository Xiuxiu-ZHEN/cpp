/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:02:24 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/04 21:59:52 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP
# include <iostream>
# include <exception>
# include <string>

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