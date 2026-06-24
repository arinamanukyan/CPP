/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 20:57:47 by arimanuk          #+#    #+#             */
/*   Updated: 2026/04/23 21:56:09 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <iostream>
#include <cstdlib>

template <typename T>
class Array
{
	private:
		T *data;
		unsigned int _size;

	public:
		Array();
		Array(unsigned int n);
		Array(const Array& other);
		Array& operator=(const Array& other);
		T& operator[](unsigned int index);
		const T& operator[](unsigned int index) const;
		size_t size();
		~Array();
};

class OutOfBoundsException : public std::exception
{
	public:
		virtual const char* what() const throw()
		{
			return ("Index out of bounds");
		}
};

#include "Array.tpp"

#endif