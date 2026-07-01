/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 14:56:40 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/30 20:02:03 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <exception>
# include <algorithm>//std::find(first, last, value)

class NoOccurenceException : public std::exception{
    public:
        virtual const char* what() const throw(){
            return "No Occurence Exception";
        }  
};

template <typename T>//T should can accept containers such as std::vector, list, deque
typename T::iterator easyfind(T& container, int i){//typename help compilator to know what T is
    typename T::iterator found;

    found = std::find(container.begin(), container.end(), i);
    if(found == container.end())
        throw NoOccurenceException();
    return found;
};

#endif