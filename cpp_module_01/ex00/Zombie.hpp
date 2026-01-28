/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/26 21:06:33 by arina             #+#    #+#             */
/*   Updated: 2026/01/26 21:52:04 by arina            ###   ########.fr       */
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

	Zombie();
	~Zombie();
};