/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:36:41 by arimanuk          #+#    #+#             */
/*   Updated: 2026/01/30 21:00:32 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ctype.h>

class Zombie 
{
	public:
		std::string name;
		Zombie* zombieHorde(int N, std::string name);
		void announce(std::string name);
	Zombie();
	~Zombie();
};