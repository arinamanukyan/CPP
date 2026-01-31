/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:25:59 by arina             #+#    #+#             */
/*   Updated: 2026/01/29 20:26:59 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setter(std::string name)
{
	this->name = name;
}

std::string Zombie::getter() const
{
	return (this->name);
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Default constructor called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor called for " << this->name << std::endl;
}
