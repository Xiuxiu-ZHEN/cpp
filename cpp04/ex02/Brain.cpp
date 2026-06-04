/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: xzhen <xzhen@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/23 20:43:33 by xzhen             #+#    #+#             */
/*   Updated: 2026/05/23 21:29:36 by xzhen            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain() {
    std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& other) {
    std::cout << "Brain copy constructor called" << std::endl;
    *this = other;
}

Brain& Brain::operator=(const Brain& other) {
    std::cout << "Brain copy assignment operator called" << std::endl;
    if (this != &other)
        for (int i = 0; i < 100; i++)
            this->ideas[i] = other.ideas[i];
    return *this;
}

Brain::~Brain() {
    std::cout << "Brain destructor called" << std::endl;
}
// ------------Functions------------------------------
void Brain::setIdea(int a, const std::string& idea) {
    if (a >= 0 && a < 100)
        this->ideas[a] = idea;
}

std::string Brain::getIdea(int a) const {
    if (a >= 0 && a < 100)
        return this->ideas[a];
    return "";
}

