/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 18:16:08 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/26 20:07:47 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie{
	private:
		std::string name;
	public:
		void announce(void);
		Zombie(std::string name);
		~Zombie(void);
};

Zombie* newZombie(std::string name);
void randomChump(std::string name);

#endif
