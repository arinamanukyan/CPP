/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:21:22 by arimanuk          #+#    #+#             */
/*   Updated: 2026/02/26 20:00:28 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <cmath>

class ClapTrap
{
	private:
		std::string name;
		int hit_point;
		int energy_point;
		int attack_damage;

	public:
		ClapTrap();
		ClapTrap(std::string name);
		void attack(const std::string& target);
		ClapTrap(const ClapTrap& other);
		ClapTrap& operator=(const ClapTrap& other);
		void takeDamage(unsigned int amount);
		void beRepaired(unsigned int amount);
		std::string getName() const;
		~ClapTrap();
};