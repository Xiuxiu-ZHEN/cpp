/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/03 19:52:14 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/03 20:25:31 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int ac, char **av){
    Harl a;
    int level;
    
    if (ac !=2){
        std::cout << "Wrong usage: ./harlFilter <level>" << std::endl;
        return(1);
    }
    level = a.level_to_number(av[1]);
    a.complain(level);
}