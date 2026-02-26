/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:21:01 by arimanuk          #+#    #+#             */
/*   Updated: 2026/02/26 22:17:14 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap enemy("Arishka");
	enemy.attack("Vrds");
	enemy.beRepaired(12);
	enemy.takeDamage(10);
}