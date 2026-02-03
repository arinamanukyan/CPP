/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/29 21:11:12 by arimanuk          #+#    #+#             */
/*   Updated: 2026/01/31 20:11:06 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <ctype.h>

int main()
{
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;
	std::cout << "Memory address of the string -> " << &str << std::endl;
	std::cout << "Memory address held by stringPTR -> " << stringPTR << std::endl;
	std::cout << "Memory address held by stringREF -> " << &stringREF << std::endl << std::endl;
	std::cout << "Value of the string -> " << str << std::endl;
	std::cout << "Value pointed to by stringPTR -> " << *stringPTR << std::endl;
	std::cout << "Value pointed to by stringREF -> " << stringREF << std::endl;
	return (0);
}