/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:15:20 by arina             #+#    #+#             */
/*   Updated: 2026/02/04 19:35:26 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	Harl obj;
	std::string level;

	std::cout << "Please choose level  | DEBUG | INFO | WARNING | ERROR | ---> ";
	std::cin >> level;
	std::cout << std::endl;
	obj.complain(level);
}