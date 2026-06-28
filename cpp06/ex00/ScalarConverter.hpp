/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/12 20:33:05 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/28 20:25:16 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <string>
# include <cstdlib>
# include <climits>
# include <cmath>
# include <cctype>
# include <iomanip>

class ScalarConverter{
    private://cannot instanciation with contructor in private
        ScalarConverter();
        ~ScalarConverter();
        ScalarConverter(const ScalarConverter &copy);
        ScalarConverter &operator=(const ScalarConverter &copy);
        //class should not be instantiable -> nope -> ScalarConverter obj; obj.printChar(42);
        static void printChar(double d);
        static void printInt(double d);
        static void printFloat(double d);
        static void printDouble(double d);
    public://static let us use ScalarConverter:convert without instanciate ScalarConverter
        static void convert(const std::string &literal);//here ref is const, fast and don't need space
};

#endif