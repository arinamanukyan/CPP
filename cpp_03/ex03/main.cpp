/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:21:01 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/15 14:19:19 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main(void)
{
	std::cout << "===== Construction =====" << std::endl;
	DiamondTrap a;
	DiamondTrap b("Beta");

	std::cout << std::endl;
	std::cout << "===== whoAmI =====" << std::endl;
	a.whoAmI();
	b.whoAmI();

	std::cout << std::endl;
	std::cout << "===== Attack =====" << std::endl;
	a.attack("Beta");
	b.takeDamage(30);
	b.beRepaired(10);

	std::cout << std::endl;
	std::cout << "===== getName =====" << std::endl;
	std::cout << "a: " << a.getName() << std::endl;
	std::cout << "b: " << b.getName() << std::endl;

	std::cout << std::endl;
	std::cout << "===== Copy Constructor =====" << std::endl;
	DiamondTrap c(a);
	c.whoAmI();
	std::cout << "c: " << c.getName() << std::endl;

	std::cout << std::endl;
	std::cout << "===== Assignment Operator =====" << std::endl;
	DiamondTrap d("Delta");
	d = b;
	d.whoAmI();
	std::cout << "d: " << d.getName() << std::endl;

	std::cout << std::endl;
	std::cout << "===== Default Constructor =====" << std::endl;
	DiamondTrap e;
	e.whoAmI();
	e.attack("Alpha");

	std::cout << std::endl;
	std::cout << "===== Destruction =====" << std::endl;
	return 0;
}