/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 21:07:57 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/29 17:29:58 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_TPP
# define ARRAY_TPP


//constructors
template <typename T>
Array<T>::Array() : data(NULL), length(0){}

template <typename T>
Array<T>::Array(unsigned int n) : length(n){
    data = new T[n]();//new n个T类型的数据
}
//copy constructor
template <typename T>
Array<T>::Array(const Array& copy) : data(NULL), length(copy.length){
    data = new T[length]();//copy length
    for(unsigned int a = 0; a < length; a++)
        data[a] = copy.data[a];//copy data
}
//copy assignment operator
template <typename T>
Array<T>& Array<T>::operator=(const Array& other){
    if(this != &other){
        T* newData = new T[other.length];// newdata is imediate

        for (unsigned int i = 0; i < other.length; i++)
            newData[i] = other.data[i];

        delete[] data;
        data = newData;
        length = other.length;
    }
    return *this;
}
//destructor
template <typename T>
Array<T>::~Array(){
    delete[] data;
}
//length
template <typename T>
unsigned int Array<T>::size() const{
    return length;
}
//operator non-const
template <typename T>
T& Array<T>::operator[](unsigned int i){
    if (i >= length)
        throw std::exception();
    return data[i];
}
//operator const
template <typename T>
const T& Array<T>::operator[](unsigned int i) const{
      if (i >= length)
        throw std::exception();
    return data[i];
}

#endif