/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:17:23 by arina             #+#    #+#             */
/*   Updated: 2026/03/16 22:19:49 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default construtor was called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor was called" << std::endl;
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog operator= was called" << std::endl;
    if (this == &other)
        return (*this);
    Animal::operator=(other);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor was called" << std::endl;
}

void Dog::makeSound() const
{
    std::cout << "Haf Haf Haf" << std::endl;
}