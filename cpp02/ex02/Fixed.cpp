/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:52:21 by bribot            #+#    #+#             */
/*   Updated: 2026/07/19 15:38:52 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : number(0)
{
	return ;
}

Fixed::Fixed(const Fixed& tocopy) : number(tocopy.getRawBits())
{
	return;
}

Fixed::Fixed(const int to_convert)
{
	number = to_convert * 256;
}

Fixed::Fixed(const float to_convert)
{
	number = to_convert * 256;
}

Fixed::~Fixed()
{
	return ;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	if (this != &other)
		number = other.getRawBits();
	return (*this);
}

std::ostream &operator<<(std::ostream &o, const Fixed& other)
{
	float f;

	f = other.toFloat();
	o << f;
	return (o);
}

int	Fixed::operator>(const Fixed& other)
{
	if (this->toFloat() > other.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator<(const Fixed& other)
{
	if (this->toFloat() < other.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator>=(const Fixed& other)
{
	if (this->toFloat() >= other.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator<=(const Fixed& other)
{
	if (this->toFloat() <= other.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator==(const Fixed& other)
{
	if (this->toFloat() == other.toFloat())
		return (1);
	return (0);
}

int	Fixed::operator!=(const Fixed& other)
{
	if (this->toFloat() != other.toFloat())
		return (1);
	return (0);
}

float	Fixed::operator+(const Fixed& other)
{
	return(this->toFloat() + other.toFloat());
}

float	Fixed::operator-(const Fixed& other)
{
	return(this->toFloat() - other.toFloat());
}

float	Fixed::operator*(const Fixed& other)
{
	return(this->toFloat() * other.toFloat());
}

float	Fixed::operator/(const Fixed& other)
{
	return(this->toFloat() / other.toFloat());
}

void	Fixed::operator++()
{
	this->number++;
}

int	Fixed::getRawBits(void) const
{
	return (number);
}

void	Fixed::setRawBits(int const raw)
{
	number = raw;
}

int	Fixed::toInt(void) const
{
	return (number / 256);
}

float Fixed::toFloat(void) const
{
	return ((float)number / 256);
}
