/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:17:37 by arina             #+#    #+#             */
/*   Updated: 2026/03/10 22:33:04 by arimanuk         ###   ########.fr       */
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
}
Weapon::~Weapon()
{
	std::cout << "Weapon destructor called" << std::endl;
}