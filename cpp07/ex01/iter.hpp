/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 21:07:03 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/29 12:12:28 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
# define ITER_HPP

# include <iostream>
# include <cstddef>

template <typename T, typename F>
void iter(T *array, const size_t len, F fonc){
    if (!array)
		return;
    for(size_t i = 0; i < len; i++)
        fonc(array[i]);
}
template <typename T, typename F>
void iter(const T* array, const size_t len, F func)
{
    if (!array)
        return;
    for (size_t i = 0; i < len; ++i)
        func(array[i]);
}

template <typename T>
void print(const T &i){
    std::cout << i <<std::endl;
}

template <typename T>
void increment(T& x){
    ++x;
}

#endif