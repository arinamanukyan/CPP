/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:04:02 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/10 20:24:37 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	Zombie z1;
	std::string name;
	std::cout << "Enter name: ";
	std::cin >> name;
	std::cout << std::endl;
	z1.setter(name);
	Zombie *zombie = newZombie(z1.getName());
	randomChump(zombie->getName());
	delete zombie;
	return 0;
}