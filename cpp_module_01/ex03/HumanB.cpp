/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:17:17 by arina             #+#    #+#             */
/*   Updated: 2026/02/01 19:35:41 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

void HumanB::attack()
{
    if (this->weapon)
    {
        std::cout << this->name << " attacks with their ";
        std::cout << this->weapon->getType() << std::endl; 
    }
    else
        std::cout << "This human has not weapon" << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
    this->weapon = &weapon;
}

HumanB::HumanB(std::string name)
{
    this->name = name;
    this->weapon = NULL;
    std::cout << "HumanB constructor with params was called" << std::endl;
}

HumanB::~HumanB()
{
    std::cout << "HumanB destructor called" << std::endl;
}