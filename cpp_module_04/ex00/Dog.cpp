/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:17:23 by arina             #+#    #+#             */
/*   Updated: 2026/03/15 19:12:26 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog()
{
    this->type = "Dog";
    std::cout << "Dog default construtor was called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other) {}

Dog& Dog::operator=(const Dog& other)
{
    Animal::operator=(other);
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog destructor was called" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Haf Haf" << std::endl;
}