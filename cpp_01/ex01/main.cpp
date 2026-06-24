/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:11:12 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/11 15:19:36 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
	std::string name;
	int n;
	std::cout << "Enter name zombie-> ";
	std::cin >> name;
	std::cout << "Enter count of zombies-> ";
	std::cin >> n;
	std::cout << std::endl;
	Zombie z1;
	Zombie *zmb = zombieHorde(n, name);
	int i;
	for (i = 0; i < n; i++)
		zmb[i].announce();
	delete[] zmb;
}