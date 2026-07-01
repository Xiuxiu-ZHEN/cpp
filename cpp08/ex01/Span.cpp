/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:45:02 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/30 23:06:58 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <algorithm>

Span::Span() : _size(0) {};
Span::Span(unsigned int N) : _size(N) {}
Span::Span(const Span& copy){ *this = copy;}
Span& Span::operator=(const Span& other){
    if(this != &other){
        _size = other._size;
        _numbers = other._numbers;
    }
    return *this;
}
Span::~Span(){}
//---------------------------------------------
void Span::addNumber(int number){
    if(_numbers.size() >= _size)
        throw noEnoughSpace();
    _numbers.push_back(number);
}
//-------------------------------------------
int Span::shortestSpan() const{
    if (_numbers.size() < 2)
        throw noSpanException();
    std::vector<int> tmp(_numbers);
    std::sort(tmp.begin(), tmp.end());
    int shortestEcart = tmp [1] - tmp[0];//initialization
    for(size_t i = 1; i < tmp.size() - 1; i++){
        int ecart = tmp[i+1] - tmp[i];
        if (ecart < shortestEcart)
            shortestEcart = ecart;
    }
    return shortestEcart;
}
//-------------------------------------------
int Span::longestSpan() const{
    if (_numbers.size() < 2)
        throw noSpanException();
    int min = *std::min_element(_numbers.begin(), _numbers.end());
    int max = *std::max_element(_numbers.begin(), _numbers.end());
    return max - min;
}
//-------------------------------------------
unsigned int Span::size() const{
    return _numbers.size();
}
       
