/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/22 18:14:00 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/15 18:21:38 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat a("Alice", 1);
		std::cout << a << std::endl;

		Bureaucrat b("Bob", 150);
		std::cout << b << std::endl;

		b.incrementGrade();
		std::cout << b << std::endl;

		b.decrementGrade();
		std::cout << b << std::endl;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	std::cout << "--------------------------------------------" << std::endl;

	try
	{
		Bureaucrat c("Vardan", 0);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat d("Arina", 151);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat e("blabla", 1);
		e.incrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}

	try
	{
		Bureaucrat f("mama", 150);
		f.decrementGrade();
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}