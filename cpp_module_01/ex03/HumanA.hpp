/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:26:54 by arina             #+#    #+#             */
/*   Updated: 2026/02/01 19:25:18 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "Weapon.hpp" 

class HumanA
{
    private:
        std::string name;
        Weapon& weapon;

    public:
        void attack();
    
    HumanA(std::string name, Weapon& weapon);
    ~HumanA();
};