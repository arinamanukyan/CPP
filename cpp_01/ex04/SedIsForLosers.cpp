/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   SedIsForLosers.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/10 21:00:58 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/10 22:16:53 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "SedIsForLosers.hpp"

int SedIsForLosers(char** argv)
{
	std::string filename = argv[1];
	std::string s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.length() == 0)
		return (1);
	std::ifstream infile(filename.c_str());
	if (!infile)
		return (1);
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
		return (1);
	outfile << result;
	return (0);
}