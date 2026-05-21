/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 20:29:53 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/28 21:28:33 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB{
    private:
        std::string nameB;
        Weapon *WeaponB; //pointer can be null
    public:
        void attack();
        HumanB(std::string nameB);
        ~HumanB();
        void setWeapon(Weapon &WeaponB);
};

#endif
