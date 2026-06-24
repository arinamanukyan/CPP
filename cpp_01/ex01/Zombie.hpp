/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:36:41 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/11 15:19:14 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <ctype.h>

class Zombie
{
	private:
		std::string name;

	public:
		void announce();
		void setName(std::string name);
		Zombie();
		~Zombie();
};

Zombie* zombieHorde(int N, std::string name);

#endif