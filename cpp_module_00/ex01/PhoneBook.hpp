/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 20:06:02 by arina             #+#    #+#             */
/*   Updated: 2026/01/14 20:57:48 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>
#include "Contact.hpp"


class PhoneBook 
{
    private:
        int index_for_print;
        int index_for_pp;
        Contact contact[3];
        std::string format_field(const std::string &str);
    public:
        PhoneBook();//deafult ctor
        void add_command();
        void search_command();
        ~PhoneBook(); //dtor
};