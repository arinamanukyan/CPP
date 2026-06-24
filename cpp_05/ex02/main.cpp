/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 21:34:00 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/17 17:34:08 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(NULL));
	std::cout << "\n========== SHRUBBERY SUCCESS ==========\n" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		ShrubberyCreationForm shrub("home");
		boss.signForm(shrub);
		boss.executeForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n========== ROBOTOMY SUCCESS ==========\n" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		RobotomyRequestForm robot("Bender");
		boss.signForm(robot);
		for (int i = 0; i < 5; i++)
			boss.executeForm(robot);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n========== PRESIDENTIAL SUCCESS ==========\n" << std::endl;
	try
	{
		Bureaucrat president("President", 1);
		PresidentialPardonForm pardon("Arthur Dent");
		president.signForm(pardon);
		president.executeForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n========== SIGN GRADE TOO LOW ==========\n" << std::endl;
	try
	{
		Bureaucrat intern("Intern", 150);
		PresidentialPardonForm pardon("Ford");

		intern.signForm(pardon);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n========== EXECUTE WITHOUT SIGNING ==========\n" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		ShrubberyCreationForm shrub("park");

		boss.executeForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n========== EXECUTE GRADE TOO LOW ==========\n" << std::endl;
	try
	{
		Bureaucrat boss("Boss", 1);
		Bureaucrat worker("Worker", 150);

		ShrubberyCreationForm shrub("garden");

		boss.signForm(shrub);
		worker.executeForm(shrub);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "\n========== CONSTRUCTOR EXCEPTIONS ==========\n" << std::endl;
	try
	{
		Bureaucrat bad("Bad", 0);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat bad("Bad", 151);
	}
	catch (std::exception &e)
	{
		std::cerr << e.what() << std::endl;
	}
	return (0);
}