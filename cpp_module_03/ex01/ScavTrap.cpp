/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 18:04:36 by arimanuk          #+#    #+#             */
/*   Updated: 2026/02/28 20:02:35 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap()
{
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap default constructor was called" << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = 100;
	this->energy_point = 50;
	this->attack_damage = 20;
	std::cout << "ScavTrap param constructor was called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& other) : ClapTrap(other)
{
	std::cout << "ScavTrap copy constructor called" << std::endl;
}

void ScavTrap::attack(const std::string& target)
{
	if (this->hit_point <= 0)
	{
		std::cout << "ScavTrap " << this->name << " is dead and cannot attack." << std::endl;
		return ;
	}
	if (this->energy_point <= 0)
	{
		std::cout << "ScavTrap " << name << " has no energy left." << std::endl;
		return ;
	}
	this->energy_point--;
	std::cout << "ScavTrap " << name << " attacks " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& other)
{
	if(this == &other)
		return (*this);
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_damage = other.attack_damage;
	return (*this);
}

void ScavTrap::guardGate()
{
	if (this->hit_point <= 0)
	{
		std::cout << "ScavTrap " << name << " is destroyed and cannot enter Gate keeper mode!\n";
		return;
	}
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor was called" << std::endl;	
}