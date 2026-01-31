/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:01:45 by arimanuk          #+#    #+#             */
/*   Updated: 2026/01/29 19:40:06 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
	Zombie zmb;

	zmb.name = name;
	std::cout << "Random zombie created: " << name << std::endl;
	zmb.announce();
}