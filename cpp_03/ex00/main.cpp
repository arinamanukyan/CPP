/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:21:01 by arimanuk          #+#    #+#             */
/*   Updated: 2026/02/28 18:14:55 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap a("Arishka");

	a.attack("Enemy");
	a.beRepaired(5);
	a.takeDamage(3);
	for (int i = 0; i < 15; i++)
		a.attack("Enemy");
	a.beRepaired(5);
	a.takeDamage(200);
	a.attack("Enemy");
	a.beRepaired(10);
	ClapTrap b("Second");
	b.takeDamage(50);
	return 0;
}