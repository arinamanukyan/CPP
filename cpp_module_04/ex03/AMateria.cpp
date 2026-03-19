/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 20:14:20 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/18 20:51:23 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria default constructor was called" << std::endl;
}

std::string const &AMateria::getType() const
{
	return (this->type);
}

AMateria::AMateria(std::string const &type)
{
	(void)type;
	std::cout << "Boom" << std::endl;
}

AMateria::~AMateria()
{
	std::cout << "AMateria destructor was called" << std::endl;
}