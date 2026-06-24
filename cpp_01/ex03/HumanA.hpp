/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:26:54 by arina             #+#    #+#             */
/*   Updated: 2026/03/10 22:24:42 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "Weapon.hpp" 

class HumanA
{
	private:
		std::string name;
		Weapon& weapon;

	public:
		void attack();
		HumanA(std::string name, Weapon& weapon);
		~HumanA();
};

#endif