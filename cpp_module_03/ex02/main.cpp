/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/25 19:21:01 by arimanuk          #+#    #+#             */
/*   Updated: 2026/03/01 17:06:35 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    std::cout << "\n========== CASE 1: Basic stats + ability ==========\n";
    FragTrap f1("Basic");
    f1.attack("Enemy");        // should deal 30 damage
    f1.highFivesGuys();        // positive message
    f1.takeDamage(20);         // HP decreases
    f1.beRepaired(10);         // HP increases, EP -1



    // std::cout << "\n========== CASE 2: Energy drain to zero ==========\n";
    // FragTrap f2("Battery");
    // for (int i = 0; i < 100; i++)
    //     f2.attack("dummy");    // 100 should succeed if EP=100

    // f2.attack("dummy");        // must fail (no energy)
    // f2.beRepaired(1);          // must fail (no energy)
    // f2.highFivesGuys();        // should still work (if not dead)



    // std::cout << "\n========== CASE 3: Death behavior ==========\n";
    // FragTrap f3("Dead");
    // f3.takeDamage(200);        // HP becomes 0

    // f3.attack("Enemy");        // must refuse
    // f3.beRepaired(10);         // must refuse
    // f3.highFivesGuys();        // should refuse (recommended)



    // std::cout << "\n========== CASE 4: Damage edge cases ==========\n";
    // FragTrap f4("Edges");
    // f4.takeDamage(0);          // should not change HP
    // f4.takeDamage(9999);       // HP becomes 0 (not negative)
    // f4.takeDamage(10);         // already dead



    // std::cout << "\n========== CASE 5: Repair edge cases ==========\n";
    // FragTrap f5("Heal");
    // f5.beRepaired(0);          // may still consume energy (depends on your logic)
    // f5.takeDamage(50);
    // f5.beRepaired(1000);       // if capped, should not exceed max HP



    // std::cout << "\n========== CASE 6: Copy constructor ==========\n";
    // FragTrap a("Original");
    // a.takeDamage(40);
    // a.attack("dummy");

    // FragTrap b(a);             // copy constructor
    // b.attack("dummy");
    // b.highFivesGuys();

    // a.attack("dummy");         // must still work independently



    // std::cout << "\n========== CASE 7: Assignment operator ==========\n";
    // FragTrap x("X");
    // FragTrap y("Y");

    // x.takeDamage(10);
    // x.attack("dummy");

    // y = x;                     // assignment
    // y.attack("dummy");
    // y.highFivesGuys();

    // x.highFivesGuys();



    // std::cout << "\n========== CASE 8: Destructor order ==========\n";
    // {
    //     FragTrap scoped("Scoped");
    //     scoped.attack("dummy");
    // } // should call FragTrap destructor then ClapTrap destructor



    return 0;
}