/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.cpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 21:49:55 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/11 23:15:11 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FileReplacer.hpp"

static void	_processAndWrite(std::ofstream &output, std::string line, const std::string &s1, const std::string &s2)
{
	size_t	offset = 0;
	size_t	target;

	while (true)
	{
		target = line.find(s1, offset);
		if (target == std::string::npos)
			break;
		
		output << line.substr(offset, target - offset);
		output << s2;
		offset = target + s1.length();
	}

	output << line.substr(offset) << "\n";
}

void	FileReplacer::ffile(std::string filename, std::string s1, std::string s2)
{

	if (s1.empty() || filename.empty())
	{
		std::cerr << "Warning: Empty filename or search string." << std::endl;
		return;
	}

	std::ifstream src(filename.c_str());
	if (!src.is_open())
	{
		std::cerr << "Error: Unable to read source file." << std::endl;
		return;
	}
    if (src.peek() == std::ifstream::traits_type::eof())
    {
        std::cerr << "Error: Input file is empty." << std::endl;
        src.close();
        return;
    }
	std::string out_name = filename + ".replace";
	std::ofstream dest(out_name.c_str());
	if (!dest.is_open())
	{
		std::cerr << "Error: Unable to create .replace file." << std::endl;
		src.close();
		return;
	}

	std::string current_line;
	while (std::getline(src, current_line))
	{
		_processAndWrite(dest, current_line, s1, s2);
	}

	src.close();
	dest.close();
}