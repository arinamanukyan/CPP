/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:55:41 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/11 15:05:06 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
	if (N <= 0)
	{
		std::cout << "Please enter valid input." << std::endl;
		return (NULL);
	}
	Zombie *horde = new Zombie[N];
	if (horde == NULL)
	{
		std::cout << "Allocation of the horde failed." << std::endl;
		return (NULL);
	}
	for (int i = 0; i < N; i++)
		horde[i].setName(name);
	return (horde);
}