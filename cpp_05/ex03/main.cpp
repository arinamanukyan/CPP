/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 21:34:00 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/17 17:53:58 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(NULL));

	try
	{
		Intern intern;
		Bureaucrat boss("Boss", 1);
		AForm* form1 = intern.makeForm("robotomy request", "Bender");
		if (form1)
		{
			boss.signForm(*form1);
			boss.executeForm(*form1);
			delete form1;
		}
		AForm* form2 = intern.makeForm("shrubbery creation", "Home");
		if (form2)
		{
			boss.signForm(*form2);
			boss.executeForm(*form2);
			delete form2;
		}
		AForm* form3 = intern.makeForm("presidential pardon", "Arthur");
		if (form3)
		{
			boss.signForm(*form3);
			boss.executeForm(*form3);
			delete form3;
		}
		AForm* form4 = intern.makeForm("wrong form", "Nobody");
		delete form4;
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}