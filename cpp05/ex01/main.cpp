/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:02:21 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/27 11:33:41 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{   std::cout << "--------test 1-----------" << std::endl;
    try
    {
        Bureaucrat bob("Bob", 50);
        Bureaucrat alice("Alice", 20);

        Form formA("FormA", 30, 15);
        Form formB("FormB", 10, 5);

        std::cout << bob;
        std::cout << alice;
        std::cout << formA;
        std::cout << formB;

        bob.signForm(formA);
        alice.signForm(formA);
        alice.signForm(formB);

        std::cout << formA;
        std::cout << formB;
    }
    catch (std::exception &e)
        {std::cerr << "Exception: " << e.what() << std::endl;}

    std::cout << "--------test 2-----------" << std::endl;
    try
        {Bureaucrat invalid("Invalid", 0);}
    catch (std::exception &e)
        {std::cerr << "Invalid bureaucrat: " << e.what() << std::endl;}

    std::cout << "--------test 3-----------" << std::endl;
    try
        {Form badForm("BadForm", 151, 10);}
    catch (std::exception &e)
        {std::cerr << "Invalid form: " << e.what() << std::endl;}

    return 0;
}

