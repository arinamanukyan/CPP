/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 20:06:02 by arina             #+#    #+#             */
/*   Updated: 2026/01/24 17:29:35 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <stdio.h>
#include <string.h>
#include <cstdlib>
#include <iomanip>

class Contact 
{
    private:
        std::string first_name;
        std::string last_name;
        std::string nick_name;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();//deafult ctor
        ~Contact(); //dtor
        int validation_for_name(std::string first_name);
        void set_first_name(std::string first_name);
        void set_last_name(std::string last_name);
        int validation_for_nick(std::string nick_name);
        int validation_for_phone(std::string number);
        void set_nick_name(std::string nick_name);
        void set_phone_number(std::string phone_number);
        void set_darkest_secret(std::string darkest_secret);
        std::string get_first_name() const;        
        std::string get_last_name() const;        
        std::string get_nick_name() const;        
        std::string get_phone_number() const;        
        std::string get_darkest_secret() const;        
};