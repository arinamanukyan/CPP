/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/18 20:10:34 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/18 20:44:38 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>

class AMateria
{
	protected:
		std::string type;
	public:
		AMateria();
		AMateria(std::string const &type);
		std::string const &getType() const;
		virtual AMateria* clone() const = 0;
		// virtual void use(ICharacter& target);
		~AMateria();
};

#endif