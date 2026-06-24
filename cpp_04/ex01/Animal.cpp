/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:12:47 by arina             #+#    #+#             */
/*   Updated: 2026/03/16 22:15:17 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    this->type = "Animal";
    std::cout << "Animal default constructor was called" << std::endl;
}

std::string Animal::getType() const
{
    return (this->type);
}

Animal::Animal(const Animal& other)
{
    std::cout << "Animal copy constructor was called" << std::endl;
    this->type = other.type;
}

void Animal::makeSound() const
{
    std::cout << "Animal makeSound" << std::endl;
}

Animal& Animal::operator=(const Animal& other)
{
    std::cout << "Animal operator= was called" << std::endl;
    if (this == &other)
        return (*this);
    this->type = other.type;
    return (*this);
}

Animal::~Animal()
{
    std::cout << "Animal destructor was called" << std::endl;
}