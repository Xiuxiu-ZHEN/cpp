/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FileReplacer.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/11 21:49:51 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/11 23:15:45 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILEREPLACER_HPP
# define FILEREPLACER_HPP

# include <iostream>
# include <string>
# include <fstream>

class FileReplacer {
public:
    void ffile(std::string filename, std::string s1, std::string s2);
};
#endif