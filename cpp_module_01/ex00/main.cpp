/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/28 21:04:02 by arimanuk          #+#    #+#             */
/*   Updated: 2026/01/29 20:25:28 by arimanuk         ###   ########.fr       */
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
	Zombie *newZombie = z1.newZombie(z1.getter());
	newZombie->randomChump(newZombie->getter());
	delete newZombie;
	return 0;
}