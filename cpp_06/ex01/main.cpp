/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 17:35:13 by arimanuk          #+#    #+#             */
/*   Updated: 2026/04/05 16:20:06 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "Serializer.hpp"
#include "Test.hpp"
#include<iostream>
int main()
{
	Test obj;
	Test obj2;
	std::cout << "Obj " << obj.count << std::endl;
	std::cout << "Obj2 " << obj2.count << std::endl;
	std::cout << "Obj static " << Test::_count << std::endl;
	// Data d;
	// d.num = 42;
	// d.str = "hello";

	// uintptr_t raw = Serializer::serialize(&d);
	// Data* result = Serializer::deserialize(raw);

	// std::cout << result->num << std::endl;  // -> 42
	// std::cout << result->str << std::endl;  // -> hello
	// std::cout << (result == &d) << std::endl; // -> 1, nshanakuma vor nuyn hascena
}