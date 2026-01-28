/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/11 20:06:33 by arina             #+#    #+#             */
/*   Updated: 2026/01/24 18:07:43 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"
#include "Contact.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    if (argc == 1)
    {
        std::string cmd;
        PhoneBook phonebook;
        std::cout << "ADD     |   Add a new contact to the phonebook" << std::endl;
        std::cout << "SEARCH  |   Display saved contacts and view details" << std::endl;
        std::cout << "EXIT    |   Quit the program" << std::endl << std::endl;
        while (1)
        {
            std::cout << "Please enter a command -> ";
            std::cin >> cmd;
            
            if (cmd == "ADD")
            {
                phonebook.add_command();
            } 
            else if (cmd == "SEARCH")
                phonebook.search_command();
            else if (cmd == "EXIT")
                return (0);
            if (std::cin.eof())
            {
                std::cout << std::endl;
                break;
            }
        }
    }
    else
    {
        std::cout << "Please don't enter an argument" << std::endl;
        return (1);
    }
    return (0); 
}