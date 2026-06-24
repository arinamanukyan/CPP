/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:15:54 by arina             #+#    #+#             */
/*   Updated: 2026/03/10 22:37:08 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
#define WEAPON_HPP
#include <iostream>
#include <ctype.h>

class Weapon
{
	private:
		std::string type;

	public:
		const std::string &getType() const;
		void setType(std::string value);
		Weapon();
		Weapon(std::string str);
		~Weapon();
};

#endif