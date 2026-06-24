/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/19 16:47:53 by arimanuk          #+#    #+#             */
/*   Updated: 2026/04/23 21:58:03 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

template <typename T>
Array<T>::Array()
{
	this->data = NULL;
	this->_size = 0;
}

template <typename T>
Array<T>::~Array()
{
	delete[] data;
}

template <typename T>
Array<T>::Array(unsigned int n)
{
	this->data = new T[n]();
	this->_size = n;
}

template <typename T>
Array<T>::Array(const Array& other)
{
	this->_size = other._size;
	this->data = new T[this->_size]();
	for (unsigned int i = 0; i < _size; i++)
		this->data[i] = other.data[i];
}

template <typename T>
Array<T>& Array<T>::operator=(const Array<T>& other)
{
	if (this->data)
		delete[] data;
	if (this != other)
	{
		this->_size = other._size;
		this->data = new T[this->_size]();
		for (unsigned int i = 0; i < _size; i++)
		{
			this->data[i] = other.data[i];
		}
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
	{
		throw OutOfBoundsException();
	}
	return data[index];
}

template <typename T>
const T& Array<T>::operator[](unsigned int index) const
{
	if (index >= this->_size)
	{
		throw OutOfBoundsException();
	}
	return data[index];
}

template <typename T>
size_t Array<T>::size()
{
	int i;
	for (i = 0; data[i]; i++)
		continue;
	return (i);
}
