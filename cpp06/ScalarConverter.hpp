/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:33:52 by bribot            #+#    #+#             */
/*   Updated: 2026/11/09 19:53:42 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <cstdio>
#include <stdlib.h>
#include <limits.h>

typedef enum e_type
{
	CHAR = 0,
	INT,
	FLOAT,
	DOUBLE
} t_type;

class ScalarConverter
{
	public :
	static void	convert(std::string to_convert);

	private :
	ScalarConverter();
	ScalarConverter(ScalarConverter &to_copy);
	ScalarConverter &operator=(ScalarConverter &to_assign);
	~ScalarConverter();
};

double convert_to_double(std::string to_convert);
void	printer(double to_print);
int is_spe(std::string to_verify);





#endif
