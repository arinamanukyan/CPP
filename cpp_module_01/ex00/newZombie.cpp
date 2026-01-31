/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:40:48 by arina             #+#    #+#             */
/*   Updated: 2026/01/29 19:19:20 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* Zombie::newZombie(std::string name)
{
	Zombie* zmb = new Zombie();
	zmb->name = name;
	std::cout << "New zombie created: " << name << std::endl;
	return (zmb);
}