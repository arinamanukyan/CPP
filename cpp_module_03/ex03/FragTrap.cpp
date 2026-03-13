/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/01 16:19:02 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/01 16:37:35 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap()
{
	std::cout << "FragTrap default constructor was called" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	this->hit_point = 100;
	this->energy_point = 100;
	this->attack_damage = 30;
	std::cout << "FragTrap param constructor was called" << std::endl;
}

void FragTrap::highFivesGuys()
{
	if (this->hit_point <= 0)
	{
		std::cout << "FragTrap " << this->name << " is destroyed and cannot request high fives!" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->name << " is requesting a positive high five!" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
	if(this == &other)
		return (*this);
	this->hit_point = other.hit_point;
	this->energy_point = other.energy_point;
	this->attack_damage = other.attack_damage;
	return (*this);
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
	std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor was called" << std::endl;	
}