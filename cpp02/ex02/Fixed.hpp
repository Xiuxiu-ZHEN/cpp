/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:33:38 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/07 22:30:55 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>
# include <string>

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

        //1.The 6 comparison operators
        bool operator>(const Fixed &other) const;
        bool operator<(const Fixed &other) const;
        bool operator>=(const Fixed &other) const;
        bool operator<=(const Fixed &other) const;
        bool operator==(const Fixed &other) const;
        bool operator!=(const Fixed &other) const;
        //2.The 4 arithmetic operators
	    Fixed	operator+(const Fixed &other) const;
	    Fixed	operator-(const Fixed &other) const;
	    Fixed	operator*(const Fixed &other) const;
	    Fixed	operator/(const Fixed &other) const;
        //3.The 4 increment/decrement perators
        Fixed &operator++();//++a    return a copy
        Fixed operator++(int);//a++  return himself
        Fixed &operator--();//--a
        Fixed operator--(int);//a--
        //4.The 4 public overloaded member functions min/max
        static Fixed		&min(Fixed &a, Fixed &b);
	    static const Fixed	&min(const Fixed &a, const Fixed &b);
	    static Fixed		&max(Fixed &a, Fixed &b);
	    static const Fixed	&max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &out, const Fixed &someone);

#endif