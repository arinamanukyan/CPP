/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:12:47 by arina             #+#    #+#             */
/*   Updated: 2026/03/15 18:59:57 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal default constructor was called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal::Animal(const Animal& other)
{
    this->type = other.type;
}

Animal& Animal::operator=(const Animal& other)
{
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

void Animal::makeSound()
{
    std::cout << "Animal makeSound" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal destructor was called" << std::endl;
}