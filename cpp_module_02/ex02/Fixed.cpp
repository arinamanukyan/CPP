/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: arimanuk <arimanuk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/07 15:53:17 by arina             #+#    #+#             */
/*   Updated: 2026/02/26 19:45:48 by arimanuk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

std::ostream& operator<<(std::ostream& os, const Fixed& obj)
{
    os << obj.toFloat();
    return os;
}

Fixed::Fixed()
{
	this->raw = 0;
}

Fixed::Fixed(const int value)
{
	this->raw = value << this->fractional_bits;
}

Fixed::Fixed(const float value)
{
	this->raw = roundf(value * (1 << this->fractional_bits));
}

Fixed::Fixed(const Fixed& other) // dumayu ety sxala
{
	this->raw = other.raw;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	this->raw = other.getRawBits();
	return (*this);
}

Fixed::~Fixed() {}

float Fixed::toFloat(void) const
{
    return (static_cast<float>(this->fractional_bits) / (1 << this->fractional_bits));
}

int Fixed::toInt(void) const
{
    return (this->fractional_bits >> this->fractional_bits);
}

void Fixed::setRawBits(int const raw)
{
	this->raw = raw;
}

int Fixed::getRawBits(void) const
{
	return (raw);
}

Fixed& Fixed::max(Fixed& a, Fixed& b)
{
	if (a.toFloat() > b.toFloat())
		return a;
	return b;
}

Fixed& Fixed::max(const Fixed& a, const Fixed& b)
{
	return Fixed::max(const_cast<Fixed&> (a), const_cast<Fixed&>(b));
}

Fixed& Fixed::min(Fixed& a, Fixed& b)
{
	if (a.toFloat() < b.toFloat())
		return a;
	return b;
}

Fixed& Fixed::min(const Fixed& a, const Fixed& b)
{
	return Fixed::min(const_cast<Fixed&> (a), const_cast<Fixed&>(b));
}

bool Fixed::operator>(const Fixed& o) const  { return this->raw > o.raw; }
bool Fixed::operator<(const Fixed& o) const  { return this->raw < o.raw; }
bool Fixed::operator>=(const Fixed& o) const { return this->raw >= o.raw; }
bool Fixed::operator<=(const Fixed& o) const { return this->raw <= o.raw; }
bool Fixed::operator==(const Fixed& o) const { return this->raw == o.raw; }
bool Fixed::operator!=(const Fixed& o) const { return this->raw != o.raw; }

const Fixed Fixed::operator+(const Fixed& o) const { return Fixed(this->toFloat() + o.toFloat()); }
const Fixed Fixed::operator-(const Fixed& o) const { return Fixed(this->toFloat() - o.toFloat()); }
const Fixed Fixed::operator*(const Fixed& o) const { return Fixed(this->toFloat() * o.toFloat()); }
const Fixed Fixed::operator/(const Fixed& o) const { return Fixed(this->toFloat() / o.toFloat()); }

Fixed& Fixed::operator++()
{
    ++this->raw;
    return *this;
}

Fixed& Fixed::operator--()
{
    --this->raw;
	return *this;
}

const Fixed  Fixed::operator++(int)
{
	Fixed temp(*this);
	++this->raw;
	return temp;
}

const Fixed Fixed::operator--(int)
{
	Fixed temp(*this);
	--this->raw;
	return temp;
}