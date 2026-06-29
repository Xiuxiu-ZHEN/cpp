/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/21 21:07:06 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/29 17:57:29 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include "iter.hpp"

int main()
{
std::cout << "---- int array (modify + print) ----" << std::endl;
    int arr1[] = {1, 2, 3, 4};
    iter(arr1, 4, increment<int>);
    iter(arr1, 4, print<int>);

    std::cout << "\n---- const int array (read only) ----" << std::endl;
    const int arr2[] = {10, 20, 30, 40};
    iter(arr2, 4, print<int>);

    std::cout << "\n---- string array (print only) ----" << std::endl;
    std::string arr3[] = {"hello", "42", "paris"};
    iter(arr3, 3, print<std::string>);

    std::cout << "\n---- edge case: single element ----" << std::endl;
    int arr4[] = {42};
    iter(arr4, 1, increment<int>);
    iter(arr4, 1, print<int>);

    std::cout << "\n---- edge case: empty array ----" << std::endl;
    int* arr5 = NULL;
    iter(arr5, 0, print<int>);

    return 0;
}