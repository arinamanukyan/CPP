/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:14:00 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/18 17:56:08 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
	try
	{
		Form a("Tax Form", 50, 30);
		std::cout << a << std::endl;
		Bureaucrat bob("Bob", 40);
		std::cout << bob << std::endl;
		bob.signForm(a);
		std::cout << a << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;
	try
	{
		Form b("Secret Doc", 10, 5);
		Bureaucrat joe("Joe", 100);
		std::cout << joe << std::endl;
		std::cout << b << std::endl;
		joe.signForm(b);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "---" << std::endl;
	try
	{
		Form c("Bad Form", 0, 50);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Form d("Bad Form", 50, 151);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}