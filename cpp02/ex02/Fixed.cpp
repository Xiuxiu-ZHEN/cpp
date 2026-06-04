/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 19:33:41 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/07 22:36:31 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(){
	this->value = 0;
}

Fixed::Fixed(const int a){
	this->value = a << bits;
}

Fixed::Fixed(float b){
	this->value = roundf(b * 256);
}
Fixed::Fixed(const Fixed &copy){
	*this = copy;
}

Fixed &Fixed::operator = (const Fixed &other){
	if (this != &other)
		this->value = other.getRawBits();
	return *this;
}

Fixed::~Fixed(){
}

int Fixed::getRawBits( void ) const{
    return this->value;
}

void Fixed::setRawBits( int const raw ){
    this->value = raw;
}

float Fixed::toFloat( void ) const{
    return (float)this->value / (float)(1 << 8);
}

int Fixed::toInt( void ) const{
    return this->value >> this->bits;
}

std::ostream &operator<<(std::ostream &out, const Fixed &someone) {
    out << someone.toFloat(); 
    return out;
}

/*---------------------new--------------------*/

//1.The 6 comparison operators
bool Fixed::operator>(const Fixed &other) const{
    return this->value > other.value;
}
bool Fixed::operator<(const Fixed &other) const{
    return this->value < other.value;
}
bool Fixed::operator>=(const Fixed &other) const{
    return this->value >= other.value;
}
bool Fixed::operator<=(const Fixed &other) const{
    return this->value <= other.value;
}
bool Fixed::operator==(const Fixed &other) const{
    return this->value == other.value;
}
bool Fixed::operator!=(const Fixed &other) const{
    return this->value != other.value;
}

//2.The 4 arithmetic operators
Fixed	Fixed::operator+(const Fixed &other) const{
    return Fixed(this->toFloat() + other.toFloat());
}
Fixed	Fixed::operator-(const Fixed &other) const{
    return Fixed(this->toFloat() - other.toFloat());
}
Fixed	Fixed::operator*(const Fixed &other) const{
    return Fixed(this->toFloat() * other.toFloat());
}
Fixed	Fixed::operator/(const Fixed &other) const{
    return Fixed(this->toFloat() / other.toFloat());
}

//3.The 4 increment/decrement perators
Fixed &Fixed::operator++(){//++a
    this->value++;
    return *this;//return the a modified
}
Fixed Fixed::operator++(int){//a++
    Fixed tmp(*this);
    this->value++; //still change a
    return tmp;//but return the original a
}
Fixed &Fixed::operator--(){//--a
    this->value--;
    return *this;
}
Fixed Fixed::operator--(int){//a--
    Fixed tmp(*this);
    this->value--;
    return tmp;
}

//4.The 4 public overloaded member functions min/max
Fixed		&Fixed::min(Fixed &a, Fixed &b){
    if(a < b)
        return a;
    return b;
}
const Fixed	&Fixed::min(const Fixed &a, const Fixed &b){
    if(a < b)
        return a;
    return b;
}
Fixed		&Fixed::max(Fixed &a, Fixed &b){
    if(a > b)
        return a;
    return b;
}
const Fixed	&Fixed::max(const Fixed &a, const Fixed &b){
    if(a > b)
        return a;
    return b;
}