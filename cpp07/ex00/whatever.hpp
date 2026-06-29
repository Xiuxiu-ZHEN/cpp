/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 21:06:15 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/22 00:40:45 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WHATEVER_HPP
# define WHATEVER_HPP

# include <iostream>

template <typename T>
void swap(T &a, T&b){
    T tmp = a;
    a = b;
    b = tmp;
}
template <typename T>
T min(T &a, T &b){
    return(a < b ? a : b);
}
template <typename T>
T max(T &a, T &b){
    return(a > b ? a : b);
}

#endif