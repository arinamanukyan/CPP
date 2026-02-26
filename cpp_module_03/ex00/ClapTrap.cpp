/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:21:15 by arimanuk          #+#    #+#             */
/*   Updated: 2026/02/26 20:09:02 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap()
{
	this->name = "default name";
	this->hit_point = 10;
	this->energy_point = 10;
	this->attack_damage = 0;
	std::cout << "Default constructor was called" << std::endl;
}


ClapTrap::ClapTrap(std::string name) : name(name), hit_point(10), energy_point(10), attack_damage(0)
{	
}

ClapTrap::ClapTrap(const ClapTrap& other)
{
	this->name = other.name;
	this->attack_damage = other.attack_damage;
	this->energy_point = other.energy_point;
	this->hit_point = other.hit_point;
	// stex inch petqa grem??
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	this->name = other.name;
	this->attack_damage = other.attack_damage;
	this->energy_point = other.energy_point;
	this->hit_point = other.hit_point;
	return(*this);
}

std::string ClapTrap::getName() const
{
	return (this->name);
}

void ClapTrap::takeDamage(unsigned int amount)
{
	if (this->hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is already destroyed and cannot take more damage!" << std::endl;
		return;
	}
	this->hit_point -= amount;
	if (this->hit_point < 0)
		this->hit_point = 0;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage! Remaining HP: "<< this->hit_point << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount)
{
	if (this->hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " cannot repair itself because it is destroyed!" << std::endl;
		return;
	}
	if (this->energy_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " has no energy left to repair!" << std::endl;
		return;
	}
	this->hit_point += amount;
	this->energy_point--;
	std::cout << "ClapTrap " << this->name << " repairs itself for " << amount << " hit points! Current HP: " << this->hit_point << ", Energy left: " << this->energy_point << std::endl;
	
}

void ClapTrap::attack(const std::string& target)
{
	if (this->hit_point <= 0)
	{
		std::cout << "ClapTrap " << this->name << " is dead and cannot attack." << std::endl;
		return ;
	}
	if (this->energy_point <= 0)
	{
		std::cout << "ClapTrap " << name << " has no energy left." << std::endl;
		return ;
	}
	this->energy_point--;
	std::cout << "ClapTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << "Destructor was called" << std::endl;	
}