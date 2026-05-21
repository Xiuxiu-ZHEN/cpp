/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:43:56 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/11 22:29:00 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

int main(int ac, char **av)
{
	std::string f_name, s1, s2;
    FileReplacer fr;

	std::cout << "--Exercise 04 - String Replacer --" << std::endl;

	if (ac != 4)
	{
		std::string buffer;
		std::cout << "Invalid arguments. Please provide manually:" << std::endl;

		std::cout << "Target file: ";
		std::getline(std::cin, f_name);

		std::cout << "Find string: ";
		std::getline(std::cin, s1);

		std::cout << "Replace with: ";
		std::getline(std::cin, s2);
	}
	else
	{
		f_name = av[1];
		s1 = av[2];
		s2 = av[3];
	}

	fr.ffile(f_name, s1, s2);
	return (0);
}