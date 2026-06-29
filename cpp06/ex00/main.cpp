/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 20:32:30 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/29 11:29:18 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(int argc, char** argv) {
    if (argc == 2) {
        ScalarConverter::convert(argv[1]);
        return 0;
    }
     ScalarConverter::convert("999999999999999999999999999999999999999");
    std::cout << "\n--- Test 1: Char Literal ---" << std::endl;
    ScalarConverter::convert("a");

    std::cout << "\n--- Test 2: Int Literals ---" << std::endl;
    ScalarConverter::convert("0");
    ScalarConverter::convert("42");
    ScalarConverter::convert("-42");

    std::cout << "\n--- Test 3: Float Literals ---" << std::endl;
    ScalarConverter::convert("0.0f");
    ScalarConverter::convert("4.2f");
    ScalarConverter::convert("-4.2f");

    std::cout << "\n--- Test 4: Double Literals ---" << std::endl;
    ScalarConverter::convert("0.0");
    ScalarConverter::convert("42.42");

    std::cout << "\n--- Test 5: Pseudo Literals (Float) ---" << std::endl;
    ScalarConverter::convert("nanf");
    ScalarConverter::convert("+inff");
    ScalarConverter::convert("-inff");

    std::cout << "\n--- Test 6: Pseudo Literals (Double) ---" << std::endl;
    ScalarConverter::convert("nan");
    ScalarConverter::convert("+inf");
    ScalarConverter::convert("-inf");

    std::cout << "\n--- Test 7: Int Overflow Defensive Test ---" << std::endl;
    ScalarConverter::convert("2147483648");

    std::cout << "\n--- Test 8: Non-displayable Char Test ---" << std::endl;
    ScalarConverter::convert("0");
    
    std::cout << "\n--- Test 9: Invalid Inputs ---" << std::endl;
    ScalarConverter::convert("42.42ff");
    ScalarConverter::convert("hello42");

    return 0;
}