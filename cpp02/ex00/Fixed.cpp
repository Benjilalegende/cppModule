/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:57:54 by bribot            #+#    #+#             */
/*   Updated: 2026/07/17 15:12:36 by bribot           ###   ########.fr       */
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

Fixed::~Fixed()
{
	std::cout << "destrucor called" << std::endl;
	return ;
}

Fixed& Fixed::operator=(const Fixed& other)
{
	std::cout << "copy asssignement called" << std::endl;
	if (this != &other)
		number = other.getRawBits();
	return (*this);
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
