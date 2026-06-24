/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/29 21:17:13 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/22 18:31:46 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {}
ScalarConverter::~ScalarConverter() {}
ScalarConverter::ScalarConverter(const ScalarConverter&) {}
ScalarConverter& ScalarConverter::operator=(const ScalarConverter&) { return *this; }

static bool isPseudo(const std::string& s)
{
	return (s == "nan" || s == "nanf"
		|| s == "+inf" || s == "-inf"
		|| s == "+inff" || s == "-inff");
}

static void printPseudo(const std::string& s)
{
	std::cout << "char: impossible\nint: impossible\n";

	if (s == "nan" || s == "nanf")
	{
		std::cout << "float: nanf\n";
		std::cout << "double: nan\n";
	}
	else if (s == "+inf" || s == "+inff")
	{
		std::cout << "float: +inff\n";
		std::cout << "double: +inf\n";
	}
	else
	{
		std::cout << "float: -inff\n";
		std::cout << "double: -inf\n";
	}
}

static void printAll(double v)
{
	std::cout << std::fixed << std::setprecision(1);

	if (std::isnan(v) || std::isinf(v) || v < 0 || v > 127 || v != static_cast<int>(v))
		std::cout << "char: impossible\n";
	else if (!std::isprint(static_cast<int>(v)))
		std::cout << "char: Non displayable\n";
	else
		std::cout << "char: '" << static_cast<char>(v) << "'\n";

	if (std::isnan(v) || std::isinf(v)
		|| v > std::numeric_limits<int>::max()
		|| v < std::numeric_limits<int>::min())
		std::cout << "int: impossible\n";
	else
		std::cout << "int: " << static_cast<int>(v) << "\n";

	if (std::isnan(v) || std::isinf(v))
		std::cout << "float: impossible\n";
	else
		std::cout << "float: " << static_cast<float>(v) << "f\n";

	std::cout << "double: " << v << "\n";
}

void ScalarConverter::convert(std::string str)
{
	if (str == "inf" || str == "inff")
	{
		std::cout << "Please enter valid input" << std::endl;
		return;
	}
	if (str.empty())
	{
		std::cout << "Please enter valid input\n";
		return;
	}

	if (str.size() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]))
	{
		char c = str[0];

		std::cout << std::fixed << std::setprecision(1);
		std::cout << "char: '" << c << "'\n";
		std::cout << "int: " << static_cast<int>(c) << "\n";
		std::cout << "float: " << static_cast<float>(c) << "f\n";
		std::cout << "double: " << static_cast<double>(c) << "\n";
		return;
	}

	if (isPseudo(str))
	{
		printPseudo(str);
		return;
	}

	char* end;
	double value = std::strtod(str.c_str(), &end);

	if (*end != '\0' && !(*end == 'f' && *(end + 1) == '\0'))
	{
		std::cout << "Please enter valid input\n";
		return;
	}

	printAll(value);
}

// #include "ScalarConverter.hpp"

// ScalarConverter::ScalarConverter() {}
// ScalarConverter::~ScalarConverter() {}
// ScalarConverter::ScalarConverter(const ScalarConverter& other)
// {
// 	(void) other;
// }
// ScalarConverter& ScalarConverter::operator=(const ScalarConverter& other)
// {
// 	(void) other;
// 	return (*this);
// }

// double getValue(const std::string& str)
// {
// 	errno = 0;
// 	char *end;
// 	double value = std::strtod(str.c_str(), &end);
// 	if (*end != '\0' && !(*end == 'f' && *(end + 1) == '\0'))
// 		throw std::runtime_error("invalid");
// 	return value;
// }

// void whenChar(char c)
// {
// 	std::cout << std::fixed << std::setprecision(1);

// 	std::cout << "char: '" << c << "'" << std::endl;
// 	std::cout << "int: " << static_cast<int>(c) << std::endl;
// 	std::cout << "float: " << static_cast<float>(c) << "f" << std::endl;
// 	std::cout << "double: " << static_cast<double>(c) << std::endl;
// }

// int numberCheck(const std::string& str)
// {
//     char *end;

//     std::strtod(str.c_str(), &end);

//     if (str.empty())
//         return -1;

//     if (*end == '\0')
//         return 1;

//     if (*end == 'f' && *(end + 1) == '\0')
//         return 2;

//     return -1;
// }

// void whenNumberIsInt(const std::string& str)
// {
// 	std::cout << std::fixed << std::setprecision(1);

// 	double value = getValue(str);

// 	if (value < std::numeric_limits<int>::min()
// 		|| value > std::numeric_limits<int>::max()
// 		|| errno == ERANGE)
// 	{
// 		std::cout << "char: impossible\nint: impossible\n";
// 	}
// 	else
// 	{
// 		int i = static_cast<int>(value);

// 		if (value < 0 || value > 127)
// 			std::cout << "char: impossible\n";
// 		else if (!std::isprint(i))
// 			std::cout << "char: Non displayable\n";
// 		else
// 			std::cout << "char: '" << static_cast<char>(i) << "'\n";

// 		std::cout << "int: " << i << "\n";
// 	}

// 	float f = static_cast<float>(value);
// 	double d = value;

// 	if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max())
// 		std::cout << "float: impossible\n";
// 	else
// 		std::cout << "float: " << f << "f\n";

// 	std::cout << "double: " << d << "\n";
// }

// void whenNumberIsDouble(const std::string& str)
// {
// 	std::cout << std::fixed << std::setprecision(1);

// 	double value = getValue(str);

// 	if (errno == ERANGE)
// 	{
// 		std::cout << "char: impossible\nint: impossible\nfloat: impossible\ndouble: impossible\n";
// 		return;
// 	}

// 	if (value < 0 || value > 127)
// 		std::cout << "char: impossible\n";
// 	else if (!std::isprint(static_cast<int>(value)))
// 		std::cout << "char: Non displayable\n";
// 	else
// 		std::cout << "char: '" << static_cast<char>(value) << "'\n";

// 	if (value > 2147483647.0 || value < -2147483648.0)
// 		std::cout << "int: impossible\n";
// 	else
// 		std::cout << "int: " << static_cast<int>(value) << "\n";

// 	float f = static_cast<float>(value);

// 	if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max())
// 		std::cout << "float: impossible\n";
// 	else
// 		std::cout << "float: " << f << "f\n";

// 	std::cout << "double: " << value << "\n";
// }

// void whenNumberIsFloat(const std::string& str)
// {
// 	std::cout << std::fixed << std::setprecision(1);

// 	double value = getValue(str);

// 	float f = static_cast<float>(value);

// 	if (value < 0 || value > 127)
// 		std::cout << "char: impossible\n";
// 	else if (!std::isprint(static_cast<int>(value)))
// 		std::cout << "char: Non displayable\n";
// 	else
// 		std::cout << "char: '" << static_cast<char>(value) << "'\n";

// 	if (value > 2147483647.0 || value < -2147483648.0)
// 		std::cout << "int: impossible\n";
// 	else
// 		std::cout << "int: " << static_cast<int>(value) << "\n";

// 	if (value > std::numeric_limits<float>::max() || value < -std::numeric_limits<float>::max())
// 		std::cout << "float: impossible\n";
// 	else
// 		std::cout << "float: " << f << "f\n";

// 	std::cout << "double: " << value << "\n";
// }

// int checkType(std::string str)
// {
// 	int type = numberCheck(str);
// 	if (str == "nan" || str == "nanf"
// 		|| str == "+inf" || str == "+inff"
// 		|| str == "-inf" || str == "-inff")
// 	{
// 		std::cout << "char: impossible" << std::endl;
// 		std::cout << "int: impossible" << std::endl;
// 		if (str == "nanf" || str == "+inff" || str == "-inff")
// 		{
// 			std::cout << "float: " << str << std::endl;
// 			std::cout << "double: " << str.substr(0, str.length() - 1) << std::endl;
// 		}
// 		else
// 		{
// 			std::cout << "float: " << str + "f" << std::endl;
// 			std::cout << "double: " << str << std::endl;
// 		}
// 		return (0);
// 	}
// 	if (type == -1)
// 		return (-1);
// 	else if (type == 0)
// 		whenNumberIsInt(str);
// 	else if (type == 1)
// 		whenNumberIsDouble(str);
// 	else if (type == 2)
// 		whenNumberIsFloat(str);
// 	return (0);
// }


// void ScalarConverter::convert(std::string str)
// {
// 	if (str.length() == 1 && std::isprint(str[0]) && !std::isdigit(str[0]) && str[0] != '.' && str[0] != '+' && str[0] != '-')
// 	{
// 		whenChar(str[0]);
// 		return ;
// 	}

// 	if (checkType(str) == -1)
// 		std::cout << "Please enter valid input" << std::endl;
// }
