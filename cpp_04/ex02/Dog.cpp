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
    this->brain = new Brain();
    this->type = "Dog";
    std::cout << "Dog default construtor was called" << std::endl;
}

Dog::Dog(const Dog& other) : Animal(other)
{
    std::cout << "Dog copy constructor was called" << std::endl;
    this->brain = new Brain(*other.brain);
}

Dog& Dog::operator=(const Dog& other)
{
    std::cout << "Dog operator= was called" << std::endl;
    if (this == &other)
        return (*this);
    Animal::operator=(other);
    delete brain;
    this->brain = new Brain(*other.brain);
    return (*this);
}

void Dog::makeSound() const
{
    std::cout << "Haf Haf" << std::endl;
}

Brain* Dog::getBrain() const {return brain;}



Dog::~Dog()
{
    std::cout << "Dog destructor was called" << std::endl;
    delete(this->brain);
}