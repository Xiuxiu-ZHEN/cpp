/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 21:07:43 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/29 17:31:51 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
# define ARRAY_HPP

# include <iostream>
# include <exception>
# include <cstddef>

template <typename T>
class Array{
    private:
        T* data;
        unsigned int length;
    public:
        Array();
        Array(unsigned int n);
        Array(const Array& copy);
        Array& operator=(const Array& other);
        ~Array();

        unsigned int size() const;
        T& operator[](unsigned int);
        const T& operator[](unsigned int) const;
        
};

# include "Array.tpp"
#endif