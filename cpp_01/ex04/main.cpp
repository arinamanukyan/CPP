/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:15:20 by arina             #+#    #+#             */
/*   Updated: 2026/03/11 15:46:40 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

int main(int argc, char **argv)
{
	if (argc == 4)
	{
		if (SedIsForLosers(argv) == 1)
			return (1);
	}
	else
		std::cout << "Error, please enter [1] filename, [2] string(1), [3] string(2)" << std::endl;
}