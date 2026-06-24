/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 20:50:45 by arimanuk          #+#    #+#             */
/*   Updated: 2026/06/19 18:53:40 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base() {}

Base* generate(void)
{
	int r = rand() % 3;

	if (r == 0)
		return (new A);
	else if (r == 1)
		return (new B);
	else
		return (new C);
}

void identify(Base* p)
{
	if (dynamic_cast<A*>(p)) // ete sxal exav veradardznuma NULL
		std::cout << "A\n";
	else if (dynamic_cast<B*>(p))
		std::cout << "B\n";
	else if (dynamic_cast<C*>(p))
		std::cout << "C\n";
}

void identify(Base& p)
{
	try {
		(void)dynamic_cast<A&>(p); // ete sxal exav catch kani exceptiony
		std::cout << "A\n"; // (void) enq ogtagorcum vor warning chta vor chenq ogtagorcum
		return;
	}
	catch (...) {} // sa nshanakuma catcha a anum bolor exceptionnery, voch miayn jarangvac std::exception-ic

	try {
		(void)dynamic_cast<B&>(p);
		std::cout << "B\n";
		return;
	}
	catch (...) {}

	try {
		(void)dynamic_cast<C&>(p);
		std::cout << "C\n";
		return;
	}
	catch (...) {}
}