/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:07:28 by arimanuk          #+#    #+#             */
/*   Updated: 2026/05/01 17:53:29 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

template <typename T>
void easyfind(T* array, int* arg)
{
	int find = 0;
	int i = 0;
	int j = 0;
	try
	{
		while (arg[i])
		{
			j = 0;
			while (array[j])
			{
				if (array[j] == arg[i])
					find++;
				j++;
			}
			i++;
		}
		if (find == 0)
			throw MyException();
	}
	catch(const MyException& e)
	{
		std::cerr << e.what() << '\n';
	}
}