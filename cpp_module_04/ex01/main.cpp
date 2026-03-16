/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:23:31 by arina             #+#    #+#             */
/*   Updated: 2026/03/15 19:30:06 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // //------Animal------Cat------Dog
    // Animal* obj[SIZE];
    // int i;
    // for (i = 0; i < (SIZE / 2); i++)
    //     obj[i] = new Cat();
    // for (;i < SIZE; i++)
    //     obj[i] = new Dog();
    // for (i = 0; i < SIZE; i++)
    //     delete (obj[i]);
    // return 0;

    // --- Test 1: Deep copy check ---
    std::cout << "=== Test 1: Deep Copy ===" << std::endl;
    Dog basic;
    {
        Dog tmp = basic;
    }

    // // --- Test 2: Assignment operator ---
    // std::cout << "\n=== Test 2: Assignment Operator ===" << std::endl;
    // Dog a;
    // Dog b;
    // a = b;
    // // Both a and b should have separate Brains

    // // --- Test 3: Cat deep copy ---
    // std::cout << "\n=== Test 3: Cat Copy ===" << std::endl;
    // Cat* cat1 = new Cat();
    // Cat* cat2 = new Cat(*cat1);
    // delete cat1;
    // delete cat2;
    // // No crash = deep copy works

    // // --- Test 4: Polymorphic copy behavior ---
    // std::cout << "\n=== Test 4: Polymorphic ===" << std::endl;
    // const Animal* dog = new Dog();
    // const Animal* cat = new Cat();
    // delete dog;
    // delete cat;

    // // --- Test 5: Self-assignment ---
    // std::cout << "\n=== Test 5: Self Assignment ===" << std::endl;
    // Dog self;
    // self = self;
    // // Should not crash or leak

    return 0;
}