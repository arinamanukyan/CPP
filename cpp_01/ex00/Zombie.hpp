/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:06:33 by arina             #+#    #+#             */
/*   Updated: 2026/03/10 20:24:25 by arimanuk         ###   ########.fr       */
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
		void announce( void );
		void setter(std::string);
		std::string getName() const;
		Zombie();
		~Zombie();
};

Zombie* newZombie( std::string name );
void randomChump( std::string name );

#endif