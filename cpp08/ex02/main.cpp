/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/23 00:32:27 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/30 23:39:38 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MutantStack.hpp"
#include <iostream>
#include <list>

int main()
{
    std::cout << "----- SUBJECT TEST -----" << std::endl;

    MutantStack<int> mstack;

    mstack.push(5);
    mstack.push(17);

    std::cout << mstack.top() << std::endl;

    mstack.pop();

    std::cout << mstack.size() << std::endl;

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();

    ++it;
    --it;

    while (it != ite)
    {
        std::cout << *it << std::endl;
        ++it;
    }

    std::stack<int> s(mstack);//copy constructor with class child
                            //it should be compactible
    //-------------------------------------------------

    std::cout << "\n----- COPY TEST -----" << std::endl;

    MutantStack<int> copy(mstack);

    for (MutantStack<int>::iterator i = copy.begin(); i != copy.end(); ++i)
    {
        std::cout << *i << " ";
    }
    std::cout << std::endl;

    //-------------------------------------------------

    std::cout << "\n----- LIST COMPARISON -----" << std::endl;

    std::list<int> lst;

    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    for (std::list<int>::iterator i = lst.begin(); i != lst.end(); ++i){
        std::cout << *i << " ";
    }

    std::cout << std::endl;

    return 0;
}