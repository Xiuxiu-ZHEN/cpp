/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 22:33:51 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/07 18:18:31 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed{
    private:
        int value;
        static const int bits = 8;
    public: 
        Fixed();
        Fixed(const int a);
        Fixed(float b);
        Fixed(const Fixed &copy);
        Fixed &operator = (const Fixed &other);
        ~Fixed();

        int getRawBits( void ) const;
        void setRawBits( int const raw );
        
        float toFloat( void ) const;
        int toInt( void ) const;
        
};

std::ostream &operator<<(std::ostream &out, const Fixed &someone);

#endif