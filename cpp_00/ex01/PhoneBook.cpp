/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/10 15:26:00 by arina             #+#    #+#             */
/*   Updated: 2026/03/09 21:25:46 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
	this->index_for_pp = 0;
	this->index_for_print = 0;
}

std::string PhoneBook::format_field(const std::string &str)
{
	if (str.length() >= 10)
		return str.substr(0, 9) + ".";
	return str;
}

void PhoneBook::add_command()
{
	std::string input;
	if (index_for_pp == 8)
		index_for_pp = 0;
	if (std::cin.eof())
	{
		std::cout << std::endl;
		exit(1);
	}
	do
	{
		std::cout << "Enter first name -> ";
		std::cin >> input;
	} while (validation_for_name(input));
	contact[index_for_pp].set_first_name(input);
	do
	{
		std::cout << "Enter last name -> ";
		std::cin >> input;
	} while ((validation_for_name(input)));
	contact[index_for_pp].set_last_name(input);
	do
	{
		std::cout << "Enter nick name -> ";
		std::cin >> input;
	} while (validation_for_nick(input));
	contact[index_for_pp].set_nick_name(input);
	do
	{
		std::cout << "Enter phone number -> ";
		std::cin >> input;
	} while (validation_for_phone(input));
	contact[index_for_pp].set_phone_number(input);
	std::cout << "Enter darkest secret -> ";
	std::cin >> input;
	std::cout << std::endl;
	contact[index_for_pp].set_darkest_secret(input);
	index_for_pp++;
	if (index_for_print < 8)
		index_for_print++;
}

void PhoneBook::search_command()
{
	if (index_for_print == 0)
		std::cout << "PhoneBook is empty" << std::endl;
	else
	{
		std::cout << std::endl;
		std::cout << std::setw(10) << ("Index")     << "|"
					<< std::setw(10) << ("First name")<< "|"
					<< std::setw(10) << ("Last name") << "|"
					<< std::setw(10) << ("Nickname")  << "|" << std::endl;

		std::cout << "----------|----------|----------|----------|" << std::endl;

		for (int i = 0; i < index_for_print; i++)
		{
			std::cout << std::setw(10) << i << "|"
						<< std::setw(10) << format_field(contact[i].get_first_name()) << "|"
						<< std::setw(10) << format_field(contact[i].get_last_name()) << "|"
						<< std::setw(10) << format_field(contact[i].get_nick_name()) << "|"
						<< std::endl;
		}  
		int input = 0;
		while (1)
		{
			std::cout << "Enter the contact index number -> ";
			std::cin >> input;
			if (std::cin.eof())
			{
				std::cout << std::endl;
				exit(1);
			}
			if (std::cin.fail())
			{
				std::cin.clear();
				std::cin.ignore(1000, '\n');
				std::cout << "Invalid input. Please enter a number" << std::endl;
				continue;
			}
			if (input >= 0 && input <= 8)
			{
				if (input < index_for_print)
				{
					std::cout << contact[input].get_first_name() << std::endl;
					std::cout << contact[input].get_last_name() << std::endl;
					std::cout << contact[input].get_nick_name() << std::endl;
					std::cout << contact[input].get_phone_number() << std::endl;
					std::cout << contact[input].get_darkest_secret() << std::endl;
				}
				else
				{
					std::cout << "There is no contact with this index. Please enter another number" << std::endl;
					continue;
				}
				break;
			}
		}
	}
}

PhoneBook::~PhoneBook() {}