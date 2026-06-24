/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/15 22:01:23 by arimanuk          #+#    #+#             */
/*   Updated: 2026/04/23 22:10:23 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#define MAX_VAL 7

int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	try
	{
		numbers[2121212] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	// int* mirror = new int[MAX_VAL];
	// srand(time(NULL));
	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	const int value = rand();
	// 	numbers[i] = value;
	// 	mirror[i] = value;
	// }
	// Array<int> tmp = numbers;
	// Array<int> test(tmp);

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	if (mirror[i] != numbers[i])
	// 	{
	// 		std::cerr << "didn't save the same value!!" << std::endl;
	// 		return 1;
	// 	}
	// }
	// try
	// {
	// 	numbers[-2] = 0;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }
	// try
	// {
	// 	numbers[MAX_VAL] = 0;
	// }
	// catch(const std::exception& e)
	// {
	// 	std::cerr << e.what() << '\n';
	// }

	// for (int i = 0; i < MAX_VAL; i++)
	// {
	// 	numbers[i] = rand();
	// }
	// delete [] mirror;
	return 0;
}