/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:57:54 by bribot            #+#    #+#             */
/*   Updated: 2026/07/19 14:40:06 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : number(0)
{
	std::cout << "default constructor called" << std::endl;
	return ;
}

Fixed::Fixed(const Fixed& tocopy) : number(tocopy.getRawBits())
{
	std::cout << "copy constructor called" << std::endl;
	return;
}

Fixed::Fixed(const int to_convert)
{
	std::cout << "INT Constructor called" << std::endl;
	number = to_convert * 256;
}

Fixed::Fixed(const float to_convert)
{
	std::cout << "Float constructor called" << std::endl;
	number = to_convert * 256;
}

Fixed::~Fixed()
{
	std::cout << "destructor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "copy asssignement called" << std::endl;
	if (this != &other)
		number = other.getRawBits();
	return (*this);
}
// std::ostream &Fixed::operator<<(std::ostream &o);

std::ostream &operator<<(std::ostream &o, const Fixed& other)
{
	float f;

	f = other.toFloat();
	o << f;
	return (o);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getraw called" << std::endl;
	return (number);
}

void	Fixed::setRawBits(int const raw)
{
	std::cout << "set called" << std::endl;
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
