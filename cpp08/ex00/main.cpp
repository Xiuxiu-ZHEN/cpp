/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/22 14:56:23 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/30 20:06:56 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

#include <vector>
#include <list>

int main()
{   //----------------vecror--------------
    std::vector<int> v;

    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    //1.search 20 in v
    try{
        std::vector<int>::iterator it;

        it = easyfind(v, 20);

        std::cout << "Found: " << *it << std::endl;
    }
    catch (const std::exception& e){
        std::cout << e.what() << std::endl;
    }
    //2.search 100 in v
    try{
        easyfind(v, 100);
    }
    catch (const std::exception& e){
        std::cout << e.what() << std::endl;
    }
    //--------------list--------------------
    std::list<int> l;

    l.push_back(1);
    l.push_back(2);
    l.push_back(3);
    //3.search 2 in l
    try{
        std::list<int>::iterator it;

        it = easyfind(l, 2);

        std::cout << "Found in list: "
                  << *it << std::endl;
    }
    catch (const std::exception& e){
        std::cout << e.what() << std::endl;
    }

    return 0;
}