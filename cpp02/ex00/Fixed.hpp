/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/16 17:17:14 by bribot            #+#    #+#             */
/*   Updated: 2026/07/17 14:51:12 by bribot           ###   ########.fr       */
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
	Fixed&	operator=(const Fixed& other);
	~Fixed();
	int		getRawBits(void) const;
	void	setRawBits(int const raw);

	private:
	int	number;
	static const int number_frac = 8;
};



#endif
