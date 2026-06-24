/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:23:31 by arina             #+#    #+#             */
/*   Updated: 2026/03/17 20:34:12 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
int main()
{
    Animal* dog = new Dog();
    Cat* cat = new Cat();

    dog->makeSound();
    cat->makeSound();

    delete dog;
    delete cat;
    
    return 0;
}