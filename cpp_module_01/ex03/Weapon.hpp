/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/01 01:15:54 by arina             #+#    #+#             */
/*   Updated: 2026/02/01 19:10:05 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <ctype.h>

class Weapon
{
    private:
        std::string type;
    public:
        const std::string &getType() const;
        void setType(std::string value);
    Weapon();
    Weapon(std::string str);
    ~Weapon();
};