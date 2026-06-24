/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/09 21:12:03 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/09 21:12:38 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

int validation_for_name(std::string first_name)
{
	int i;
	if (first_name.empty())
		return (-1);
	for (i = 0; first_name[i]; i++)
	{
		if (isalpha(first_name[i]) == 0)
			return (-1);
	}
	return (0);
}

int validation_for_nick(std::string nick_name)
{
	int i;
	for (i = 0; nick_name[i]; i++)
	{
		if (isalnum(nick_name[i]) == 0)
			return (-1);
	}
	return (0);
}

int validation_for_phone(std::string number)
{
	int i;
	for (i = 0; number[i]; i++)
	{
		if (isdigit(number[i]) == 0)
			return (-1);
	}
	return (0);
}