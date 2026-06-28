/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 20:33:02 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/28 20:19:36 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

void ScalarConverter::printChar(double d) {
    if (d < 0 || d > 127 || std::isnan(d) || std::isinf(d) ) {//inprintable
        std::cout << "char: impossible" << std::endl;
    } 
    else {
        char c = static_cast<char>(d);
        if (!std::isprint(static_cast<unsigned char>(c))) {
            std::cout << "char: Non displayable" << std::endl;
        } else {
            std::cout << "char: '" << c << "'" << std::endl;
        }
    }
}

void ScalarConverter::printInt(double d) {
    if (d > INT_MAX || d < INT_MIN || std::isnan(d) || std::isinf(d)) {
        std::cout << "int: impossible" << std::endl;
    }
    else {
        std::cout << "int: " << static_cast<int>(d) << std::endl;
    }
}

void ScalarConverter::printFloat(double d)
{
    if (std::floor(d) == d)//only if d is a int, it's true 42->42.0f
        std::cout << std::fixed << std::setprecision(1);
    else    
        std::cout << std::fixed << std::setprecision(6);

    std::cout << "float: " << static_cast<float>(d) << "f" << std::endl;
}

void ScalarConverter::printDouble(double d)
{
    if (std::floor(d) == d)
        std::cout << std::fixed << std::setprecision(1);
    else
        std::cout << std::fixed << std::setprecision(6);

    std::cout << "double: " << d << std::endl;
}
/*----------public member function------------*/
//receive the string, 
void ScalarConverter::convert(const std::string &literal){
    if (literal == "nan" || literal == "nanf") {
        std::cout << "char: impossible\nint: impossible\nfloat: nanf\ndouble: nan" << std::endl;
        return;
    }
    if (literal == "+inf" || literal == "+inff" || literal == "inf" || literal == "inff") {
        std::cout << "char: impossible\nint: impossible\nfloat: +inff\ndouble: +inf" << std::endl;
        return;
    }
    if (literal == "-inf" || literal == "-inff") {
        std::cout << "char: impossible\nint: impossible\nfloat: -inff\ndouble: -inf" << std::endl;
        return;
    }

    double d_val = 0.0;//intermediate value
    char *endptr;//point the end
    //if literal is a single char like a,b,c,d
    if (literal.length() == 1 && !std::isdigit(static_cast<unsigned char>(literal[0]))){
        d_val = literal[0];//ASCII
    }
    else
    {//if literal is not a sigle char //strtod cannot deal single char
        d_val = std::strtod(literal.c_str(), &endptr);
    //if litteral has only caracter(abc)
    if (endptr == literal.c_str())
    {
        std::cerr << "Error: invalid literal" << std::endl;
        return;
    }
    //if literal has half number half caracter like 42abc
    if (*endptr != '\0' && !(*endptr == 'f' && *(endptr + 1) == '\0'))
    {
        std::cerr << "Error: invalid literal" << std::endl;
        return;
    }
    }

    printChar(d_val);
    printInt(d_val);
    printFloat(d_val);
    printDouble(d_val);
}

