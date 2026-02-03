/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 20:36:41 by arimanuk          #+#    #+#             */
/*   Updated: 2026/01/31 19:45:12 by arina            ###   ########.fr       */
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