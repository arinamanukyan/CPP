/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:25:25 by arina             #+#    #+#             */
/*   Updated: 2026/02/01 19:30:30 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp"

class HumanB
{
    private:
        Weapon *weapon;
        std::string name;
        
    public:
        void attack(); //<name> attacks with their <weapon type>
        void setWeapon(Weapon &weapon);
    HumanB(std::string name);
    ~HumanB();
};