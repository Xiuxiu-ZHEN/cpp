/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 18:27:38 by xzhen             #+#    #+#             */
/*   Updated: 2026/04/28 21:40:01 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <iostream>
# include <string> 

class Weapon{
    private:
        std::string type;
    public:
        const std::string &getType() const;
        void setType(std::string type2);
        Weapon(std::string type);
        ~Weapon();    
};

#endif
