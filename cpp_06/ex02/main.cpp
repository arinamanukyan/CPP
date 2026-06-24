/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/09 19:00:34 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/19 18:54:15 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"

int main()
{
	//avelacnel time random generate
	for (int i = 0; i < 10; i++)
	{
		Base* obj = generate();
		identify(obj);
		identify(*obj);
		delete obj;
	}
}