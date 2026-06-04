/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/06 22:33:48 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/07 19:11:24 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed(){
    std::cout << "Default constructor called" << std::endl;
	this->value = 0;
}

Fixed::Fixed(const int a){//int to fixed-point
    std::cout << "Int constructor called" << std::endl;
	this->value = a << bits;
}

Fixed::Fixed(float b){ //float to fixed-point
    std::cout << "Float constructor called" << std::endl;
	this->value = roundf(b * 256);
}
Fixed::Fixed(const Fixed &copy){
    std::cout << "Copy constructor called" << std::endl;
	*this = copy;//will call "Copy assignment operator called"
}

Fixed &Fixed::operator = (const Fixed &other){
    std::cout << "Copy assignment operator called" << std::endl;

	if (this != &other)
		this->value = other.getRawBits();
	return *this;
}

Fixed::~Fixed(){
    std::cout << "Destructor called" << std::endl;
}

int Fixed::getRawBits( void ) const{
    return this->value;
}

void Fixed::setRawBits( int const raw ){
    this->value = raw;
}

float Fixed::toFloat( void ) const{ // huge value /256, return a float
    return (float)this->value / (float)(1 << 8);
}

int Fixed::toInt( void ) const{ // huge value /256, return an int
    return this->value >> this->bits;
}

// teach std::cout how to print Fixed
std::ostream &operator<<(std::ostream &out, const Fixed &someone) {
    out << someone.toFloat(); 
    return out;
}