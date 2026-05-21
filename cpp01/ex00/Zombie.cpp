/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 19:22:54 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/25 22:18:19 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie::Zombie(std::string name) : name(name){}

void Zombie::announce (void){
    std::cout << this->name <<": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie(void){
    std::cout << this->name <<" is destroyed." << std::endl;
}