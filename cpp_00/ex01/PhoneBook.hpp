/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 20:06:02 by arina             #+#    #+#             */
/*   Updated: 2026/03/09 21:19:22 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include <sstream>
#include "Contact.hpp"

class PhoneBook 
{
	private:
		int index_for_print;
		int index_for_pp;
		Contact contact[8];
		std::string format_field(const std::string &str);

	public:
		PhoneBook(); //deafult ctor
		void add_command();
		void search_command();
		~PhoneBook(); //dtor
};

#endif