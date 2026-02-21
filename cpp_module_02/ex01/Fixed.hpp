/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arina <arina@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:53:14 by arina             #+#    #+#             */
/*   Updated: 2026/02/21 14:56:44 by arina            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once
#include <iostream>
#include <cmath>

class Fixed
{
    private:
        float raw;
        static const int numik = 8;

    public:
        Fixed();
        Fixed(const int value);
        Fixed(const float value);
        Fixed(const Fixed& other);
        Fixed& operator=(const Fixed& other);
        ~Fixed();
        float toFloat(void) const;
        int toInt(void) const;
        void setRawBits(int const raw);
        int getRawBits(void) const;
};

std::ostream& operator<<(std::ostream& os, const Fixed& obj);