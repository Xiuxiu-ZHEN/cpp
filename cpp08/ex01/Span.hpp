/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 15:45:04 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/30 21:40:05 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <exception>
#include <string>
#include <iterator>//std::distance

class Span{
    private:
        unsigned int        _size;//limit of elements of this vector
        std::vector<int>    _numbers;//span only use vector<int> to save and calcul data
    public:                            //but addNumbers accept the data from exterior
        Span();
        Span(unsigned int N);
        Span(const Span& copy);
        Span& operator=(const Span& other);
        ~Span();
        //add a single number to  std::vector<int> _numbers;
        void addNumber(int number);
        int shortestSpan() const;
        int longestSpan() const;
        unsigned int size() const;
        //add a range of numbers with iterator/insert
        template <typename Iterator>//whatever iterator(vector, list, deque)! addNumbers should be able to accept all kind of data
        void addNumbers(Iterator begin, Iterator end){
            if(std::distance(begin, end) + _numbers.size() > _size)//"now we should add" + "now we have" > her capacity
                throw noEnoughSpace();
            _numbers.insert(_numbers.end(), begin, end);//insert the range [begin, end) to the end of vector
        }

        //Exception
        class noEnoughSpace : public std::exception{
            public:
                virtual const char* what() const throw(){
                    return "No enough space in this vector";
                }
        };
        class noSpanException : public std::exception{
            public:
                    virtual const char* what() const throw(){
                    return "Not enough elements to find a span";
        }
        };
};

#endif