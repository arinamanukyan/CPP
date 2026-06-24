/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/06 20:21:02 by arina             #+#    #+#             */
/*   Updated: 2026/03/16 21:38:04 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
    std::cout << "Brain default constructor was called" << std::endl;
}

Brain::Brain(const Brain& other)
{
    std::cout << "Brain copy constructor was called" << std::endl;
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
}

Brain& Brain::operator=(const Brain& other)
{
    std::cout << "Brain operator= was called" << std::endl;
    if (this == &other)
        return (*this);
    for (int i = 0; i < 100; i++)
        this->ideas[i] = other.ideas[i];
    return (*this);
}

std::string Brain::getIdeas(int index) const
{
    if (index < 0 || index >= 100)
        return "";
    return this->ideas[index];
}

Brain::~Brain()
{
    std::cout << "Brain destructor was called" << std::endl;
}