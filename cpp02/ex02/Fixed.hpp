/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 14:53:12 by bribot            #+#    #+#             */
/*   Updated: 2026/07/19 18:03:08 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include "Fixed.h"

class Fixed
{
	public:
	Fixed(); // DEFAULT CONSTRUCTOR
	Fixed(const Fixed& tocopy); // COPY CONSTRUCTOR
	Fixed(const int to_convert); // Constructor INT
	Fixed(const float to_convert); //constructor Float
	Fixed&	operator=(const Fixed& other); // operator =
	~Fixed(); // destructor
	//COMPARISON
	int	operator>(const Fixed& other);
	int	operator<(const Fixed& other);
	int	operator>=(const Fixed& other);
	int	operator<=(const Fixed& other);
	int	operator==(const Fixed& other);
	int	operator!=(const Fixed& other);
	//ARITHMETICS
	float	operator+(const Fixed& other);
	float	operator-(const Fixed& other);
	float	operator*(const Fixed& other);
	float	operator/(const Fixed& other);
	//Increments
	float operator++(); //pre
	float operator++(int i); //post
	float operator--(); //pre
	float operator--(int i); //post
	//MIN MAX
	static Fixed	&min(Fixed &first, Fixed &second);
	static const Fixed	&min(const Fixed &first, const Fixed &second);
	static Fixed	&max(Fixed &first, Fixed &second);
	static const Fixed	&max(const Fixed &first, const Fixed &second);

	int	toInt(void) const; //convertisseur vers les ints
	float	toFloat(void) const;
	int		getRawBits(void) const; // getter
	void	setRawBits(int const raw); //setter

	private:
	int	number;
	static const int number_frac = 8; // position du point
};

std::ostream &operator<<(std::ostream &o, const Fixed& other);

#endif
