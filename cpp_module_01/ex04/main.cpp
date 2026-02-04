/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:15:20 by arina             #+#    #+#             */
/*   Updated: 2026/02/04 14:24:05 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int argc, char **argv)
{
    if (argc == 4)
	{
		std::string filename = argv[1];
		std::string s1 = argv[2];
		std::string s2 = argv[3];
		if (s1.length() == 0)
			return 1;

		std::ifstream infile(filename.c_str());
		if (!infile)
			return 1;
		std::string content;
		std::string line;
		while (std::getline(infile, line))
		{
			content += line;
			if (!infile.eof())
				content += '\n';
		}
		infile.close();
		std::string result;
		size_t i = 0;
		while (i < content.length())
		{
			if (content.compare(i, s1.length(), s1) == 0)
			{
				result += s2;
				i += s1.length();
			}
			else
			{
				result += content[i];
				i++;
			}
		}
		std::ofstream outfile((filename + ".replace").c_str());
		if (!outfile)
			return 1;
		outfile << result;
	}
	else
		std::cout << "Error" << std::endl;
}