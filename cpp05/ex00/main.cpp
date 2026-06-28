/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/04 18:02:21 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/27 11:33:51 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
    std::cout << "--------test 1-----------" << std::endl;
    try// Test normal case
    {
        Bureaucrat a("Alice", 5);
        std::cout << a;
        a.gradeIncrement();
        std::cout << a;
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "--------test 2-----------" << std::endl;
    try// Test grade too high exception
    {
        Bureaucrat b("Bob", 1);
        std::cout << b;
        b.gradeIncrement();
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "--------test 3-----------" << std::endl;
    try// Test grade too low exception
    {
        Bureaucrat c("Charlie", 150);
        std::cout << c;
        c.gradeDecrement();
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    std::cout << "--------test 4-----------" << std::endl;
    try// Test invalid grade exception
    {
        Bureaucrat d("David", 200);
    }
    catch (const std::exception &e)
    {
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}