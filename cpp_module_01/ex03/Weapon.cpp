/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:17:37 by arina             #+#    #+#             */
/*   Updated: 2026/02/01 19:03:03 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

const std::string &Weapon::getType() const
{
    return type;
}

void Weapon::setType(std::string value)
{
    type = value;
}

Weapon::Weapon(std::string type)
{
    std::cout << "Weapon constructor with param was called" << std::endl;
    this->type = type;
}
    Weapon::Weapon()
{
    std::cout << "Weapon  default constructor called" << std::endl;
    // this->type = type;
}
Weapon::~Weapon()
{
    std::cout << "Weapon destructor called" << std::endl;
}