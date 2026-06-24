/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/28 21:07:24 by arimanuk          #+#    #+#             */
/*   Updated: 2026/05/01 17:45:29 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <iostream>

template <typename T>
void easyfind(T* array, int* arg);
class MyException : public std::exception
{
	public:
	virtual const char* what() const throw()
	{
		return ("easyfind: value not found");
	}
};
#include "easyfind.tpp"

#endif