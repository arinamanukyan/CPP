/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 20:39:04 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/18 21:21:07 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice() : AMateria("ice")
{
	std::cout << "Ice default constructor was called" << std::endl;
}

AMateria* Ice::clone() const
{
	Ice* copy = new Ice(*this);
	return copy;
}

Ice::~Ice()
{
	std::cout << "Ice destructor was called" << std::endl;
}