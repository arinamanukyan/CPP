/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:17:23 by arina             #+#    #+#             */
/*   Updated: 2026/03/16 22:20:13 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->type = "Cat";
    std::cout << "Cat default constructor was called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    std::cout << "Cat copy constructor was called" << std::endl;
}

Cat& Cat::operator=(const Cat& other)
{
    std::cout << "Cat operator= was called" << std::endl;
    if (this == &other)
        return (*this);
    Animal::operator=(other);
    return (*this);
}

void Cat::makeSound() const
{
    std::cout << "Myauuuuuu" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor was called" << std::endl;
}