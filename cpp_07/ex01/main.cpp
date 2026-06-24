/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/12 20:12:02 by arimanuk          #+#    #+#             */
/*   Updated: 2026/04/12 20:54:57 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

template <typename T, typename F>
void iter(T& address_array, const size_t length_array, F function)
{
	for (size_t i = 0; i < length_array; i++)
	{
		function(address_array[i]);
	}
}

//for test
void increment(int& x)
{
	x++;
}

template <typename T>
void print(const T& x)
{
	std::cout << x << " ";
}

int main()
{
	// const int arr[] = {1, 2, 3};
	// iter(arr, 3, increment); // compile chpetqa lini vorovhetev const valu enq uxarkum incrementin u menq garantia chunenq vor value-n chi poxvi
	std::cout << "=== Non-const int array ===\n";
	int arr[] = {1, 2, 3, 4, 5};
	size_t len = 5;

	std::cout << "Before: ";
	iter(arr, len, print<int>);
	std::cout << "\n";

	iter(arr, len, increment);

	std::cout << "After increment: ";
	iter(arr, len, print<int>);
	std::cout << "\n\n";

	std::cout << "=== Const int array ===\n";
	const double carr[] = {10.8, 20.0, 30.0};

	std::cout << "Print const array: ";
	iter(carr, 3, print<int>);
	std::cout << "\n\n";

	std::cout << "=== String array ===\n";
	std::string strs[] = {"hello", "world", "!"};

	iter(strs, 3, print<std::string>);
	std::cout << "\n";

	return 0;
}