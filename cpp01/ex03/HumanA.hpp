/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:22:59 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/28 21:34:04 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"

class HumanA{
    private:
        std::string nameA;
        Weapon &WeaponA; //reference:contenent cannot be changed; contenent should be given something initially
    public:
        void attack();
        HumanA(std::string nameA, Weapon &WeaponA);
        ~HumanA();
};

#endif