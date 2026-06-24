/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:15:20 by arina             #+#    #+#             */
/*   Updated: 2026/02/04 20:16:32 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main(int argc, char** argv)
{
	Harl obj;
	std::string level;

	if (argc == 2)
	{
		level = argv[1];
		obj.complain(level);
	}
	else
		std::cout << "Enter correct level" << std::endl;
}