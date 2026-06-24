/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 21:17:10 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/22 18:15:46 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <limits>
#include <cerrno>
#include <cmath>

class ScalarConverter
{
	private:
		ScalarConverter();
		ScalarConverter(const ScalarConverter& other);
		ScalarConverter& operator=(const ScalarConverter& other);
		~ScalarConverter();
	public:
		static void convert(std::string str);
};

void whenChar(char c);
void whenNumberIsInt(const std::string& str);
void whenNumberIsDouble(const std::string& str);
void whenNumberIsFloat(const std::string& str);
int checkType(std::string str);
double getValue(const std::string& str);
int numberCheck(const std::string& str);

#endif