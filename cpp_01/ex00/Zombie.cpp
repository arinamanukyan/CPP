/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:25:59 by arina             #+#    #+#             */
/*   Updated: 2026/03/10 20:23:37 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::setter(std::string name)
{
	this->name = name;
}

std::string Zombie::getName() const
{
	return (this->name);
}

void Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie()
{
	std::cout << "Default constructor was called" << std::endl;
}

Zombie::~Zombie()
{
	std::cout << "Destructor was called for " << this->name << std::endl;
}
