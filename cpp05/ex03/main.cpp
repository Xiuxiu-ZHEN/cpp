/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/06/09 22:35:40 by xzhen             #+#    #+#             */
/*   Updated: 2026/06/28 13:29:22 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main()
{
    Intern slave;
    Bureaucrat boss("The Boss", 1);
    AForm* form;

    std::cout << "--------test 1-----------" << std::endl;
    // 1. 测试三种表格的创建与执行
    std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
    for (int i = 0; i < 3; i++)
    {   //Intern slave 会根据不同的字符串，分别在堆里new出三种子类form,返回的是AForm *
        form = slave.makeForm(forms[i], "Target");
        if (form)
        {   //所以Bureaucrat boss可以操纵AForm
            boss.signForm(*form);
            boss.executeForm(*form);
            delete form;
        }
        std::cout << "--------Form created, signed and executed-----------" << std::endl;
    }
    std::cout << "--------test 2-----------" << std::endl;
    // 2. 测试错误表格防御（确保返回 NULL 且不崩溃）
    form = slave.makeForm("invalid form", "Nobody");
    if (form)
        delete form;

    return 0;
}
