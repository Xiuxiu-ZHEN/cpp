/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/05 20:45:59 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/07 18:31:43 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
# include <string>

class Fixed{
    private:
        int value;
        const static int bits = 8;//invisible red line 
    public:
        Fixed();
        Fixed(const Fixed &copy);
        Fixed &operator=(const Fixed &other);//make rules for =
        ~Fixed();
        int getRawBits( void ) const;
        void setRawBits( int const raw );
};

#endif