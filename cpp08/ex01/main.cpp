/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:45:10 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/30 23:14:11 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <cstdlib>

int main(){
    std::cout << "------ SUBJECT TEST ------" << std::endl;
    Span sp = Span(5);
    sp.addNumber(6);
    sp.addNumber(3);
    sp.addNumber(17);
    sp.addNumber(9);
    sp.addNumber(11);
    std::cout << sp.shortestSpan() << std::endl;
    std::cout << sp.longestSpan() << std::endl;

    std::cout << "\n------ EXCEPTION TEST ------" << std::endl;
    {
        try {
            Span sp(2);
            sp.addNumber(1);
            std::cout << sp.shortestSpan() << std::endl;
        }
        catch (const std::exception &e) {
            std::cout << "Exception: " << e.what() << std::endl;
        }
    }

    std::cout << "\n------ 10000 NUMBERS TEST ------" << std::endl;
    {
        Span sp(10000);//capacity
        std::vector<int> v;//数组v

        for (int i = 0; i < 10000; i++)
            v.push_back(i);

        sp.addNumbers(v.begin(), v.end());//v->sp

        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;
    }

    std::cout << "\n------ RANDOM TEST ------" << std::endl;
    {
        Span sp(10000);
        std::vector<int> v;

        srand(time(NULL));
        for (int i = 0; i < 10000; i++)//random number
            v.push_back(rand());//Span never generate datas
                                //Span just conserve datas
        sp.addNumbers(v.begin(), v.end());

        std::cout << "Shortest: " << sp.shortestSpan() << std::endl;
        std::cout << "Longest: " << sp.longestSpan() << std::endl;
    }

    return 0;
}