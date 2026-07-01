/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 00:32:34 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/30 23:26:45 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_TPP
# define MUTANTSTACK_TPP

template <typename T>
MutantStack<T>::MutantStack() {}

template <typename T>
MutantStack<T>::MutantStack(const MutantStack& copy) : std::stack<T>(copy) {}

template <typename T>
MutantStack<T>& MutantStack<T>::operator=(const MutantStack& other){
    if (this != &other)
        std::stack<T>::operator=(other);
    return *this;
}

template <typename T>
MutantStack<T>::~MutantStack() {}
//--------------------------------------
template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::begin(){
    return this->c.begin();//c是stack借助的容器container_type
}                           //std::stack<T>::container_type c

template <typename T>
typename MutantStack<T>::iterator MutantStack<T>::end(){
    return this->c.end();
}

#endif