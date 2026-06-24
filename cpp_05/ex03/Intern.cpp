/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 17:03:55 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/19 15:03:43 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor was called" << std::endl;
}

Intern::Intern(const Intern& other)
{
	(void) other;
}

Intern& Intern::operator=(const Intern& other)
{
	(void) other;
	return (*this);
}

AForm* Intern::makeForm(std::string form_name, std::string target)
{
	if (form_name == "shrubbery creation")
	{
		std::cout << "Intern creates " << form_name << std::endl;
		return new ShrubberyCreationForm(target);
	}
	else if (form_name == "robotomy request")
	{
		std::cout << "Intern creates " << form_name << std::endl;
		return new RobotomyRequestForm(target);
	}
	else if (form_name == "presidential pardon")
	{
		std::cout << "Intern creates " << form_name << std::endl;
		return new PresidentialPardonForm(target);
	}
	else
	{
		std::cout << "Error: form \"" << form_name << "\" does not exist" << std::endl;
		return NULL;
	}
}

Intern::~Intern()
{
	std::cout << "Intern destructor was called" << std::endl;
}
