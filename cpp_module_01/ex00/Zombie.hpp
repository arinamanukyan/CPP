/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:06:33 by arina             #+#    #+#             */
/*   Updated: 2026/01/29 19:58:27 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ctype.h>

class Zombie 
{
	private:
		std::string name;
	
	public:
		void announce( void );
		Zombie* newZombie( std::string name );
		void randomChump( std::string name );
		void setter(std::string);
		std::string getter() const;

	Zombie();
	~Zombie();
};