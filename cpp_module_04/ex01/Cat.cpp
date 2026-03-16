/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:17:23 by arina             #+#    #+#             */
/*   Updated: 2026/03/15 19:11:53 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat()
{
    this->brain = new Brain();
    this->type = "Cat";
    std::cout << "Cat default constructor was called" << std::endl;
}

Cat::Cat(const Cat& other) : Animal(other)
{
    this->brain = other.brain;
}

Cat& Cat::operator=(const Cat& other)
{
    Animal::operator=(other);
    this->brain = other.brain;
    return (*this);
}

void Cat::makeSound()
{
    std::cout << "Myauuuuuu" << std::endl;
}

Cat::~Cat()
{
    std::cout << "Cat destructor was called" << std::endl;
    delete (this->brain);
}
