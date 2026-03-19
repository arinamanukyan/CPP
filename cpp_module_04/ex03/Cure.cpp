/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 20:36:28 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/18 21:22:15 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("cure")
{
	std::cout << "Cure default contructor was called" << std::endl;
}

AMateria* Cure::clone() const
{
	Cure* copy = new Cure(*this);
		return copy;
}

Cure::~Cure()
{
	std::cout << "Cure destructor was called" << std::endl;	
}