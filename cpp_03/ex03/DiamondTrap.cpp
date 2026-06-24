/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/02 20:19:38 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/15 14:18:37 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	this->name = "Default name";
	ClapTrap::name = this->name + "_clap_name";
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 30;
	std::cout << "DiamondTrap default constructor was called" << std::endl;
}
	
DiamondTrap::DiamondTrap(std::string name)
{
	std::cout << "DiamondTrap constructor with param was called" << std::endl;
	this->name = name;
	ClapTrap::name = this->name + "_clap_name";
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 30;
}

std::string DiamondTrap::getName() const
{
	return (this->name);
}

DiamondTrap::DiamondTrap(const DiamondTrap& other) : ClapTrap(other)
{
	this->name = other.name;
	std::cout << "DiamondTrap copy constructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& other)
{
	if (this == &other)
		return (*this);
	ClapTrap::operator=(other);
	this->name = other.name;
	return (*this);
}

void DiamondTrap::attack(const std::string& target)
{
	ScavTrap::attack(target);
}

void DiamondTrap::whoAmI()
{
	std::cout << "DiamondTrap name: " << this->name << ", ClapTrap name: " << ClapTrap::name << std::endl;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor was called" << std::endl;
}