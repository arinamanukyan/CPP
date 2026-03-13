/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:21:01 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/01 16:08:37 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ScavTrap obj("Arishok");
	// ClapTrap* obj = new ScavTrap();
	// (void)obj;
	// delete obj;
	obj.attack("Enemy");
	obj.takeDamage(30);
	obj.beRepaired(20);
	obj.guardGate();
	for (int i = 0; i < 55; i++)
		obj.attack("Enemy");
	obj.guardGate();
	obj.beRepaired(10);
	obj.takeDamage(200);
	obj.attack("Enemy");
	obj.beRepaired(10);
	obj.guardGate();
	return 0;
}