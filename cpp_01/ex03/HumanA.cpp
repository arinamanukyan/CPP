/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:15:24 by arina             #+#    #+#             */
/*   Updated: 2026/03/10 22:32:06 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

void HumanA::attack()
{
	std::cout << this->name << " attacks with their ";
	std::cout << this->weapon.getType() << std::endl; 
}

HumanA::HumanA(std::string name, Weapon& weapon) : weapon(weapon)
{
	this->name = name;
	std::cout << "HumanA constructor with params was called" << std::endl;
}

HumanA::~HumanA()
{
	std::cout << "HumanA destructor called" << std::endl;
}
