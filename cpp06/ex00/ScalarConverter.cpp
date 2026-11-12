/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:38:45 by bribot            #+#    #+#             */
/*   Updated: 2026/11/11 18:08:22 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter()
{
}

ScalarConverter::ScalarConverter(ScalarConverter &to_copy)
{
	(void)to_copy;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter &to_assign)
{
	(void)to_assign;
	return (*this);
}

ScalarConverter::~ScalarConverter()
{

}

void ScalarConverter::convert(std::string toconvert)
{
	int	type = recognize_type(toconvert);
	if (type == INVALID)
	{
		print_invalid(toconvert);
		return ;
	}
	if (type == DOUBLE)
	{
		printer_double(toconvert);
		return ;
	}
	if (type == INT)
	{
		printer_int(toconvert);
		return ;
	}
	if (type == FLOAT)
	{
		printer_float(toconvert);
		return ;
	}
	if (type == CHAR)
	{
		printer_char(toconvert);
		return ;
	}
}
