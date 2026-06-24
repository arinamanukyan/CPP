/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/05 19:23:31 by arina             #+#    #+#             */
/*   Updated: 2026/03/05 20:07:50 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    // -----Animal------Cat------Dog
    Animal* meta = new Animal();
    Animal* j = new Dog();
    Animal* i = new Cat();
    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;
    i->makeSound();
    j->makeSound();
    meta->makeSound();
    delete(meta);
    delete(j);
    delete(i);

    // --------WrongAnimal-------WrongCat--------
    // WrongAnimal* meta = new WrongAnimal();
    // WrongAnimal* i = new WrongCat();
    // std::cout << i->getType() << " " << std::endl;
    // i->makeSound();
    // meta->makeSound();
    // delete(meta);
    // delete(i);
    return 0;
}