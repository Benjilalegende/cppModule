/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:38:45 by bribot            #+#    #+#             */
/*   Updated: 2026/11/09 19:44:02 by bribot           ###   ########.fr       */
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
	double numidouble;

	// if (is_spe(to_convert))
	// {
	// 	print_spe(to_convert);
	// 	return ;
	// }
	numidouble = convert_to_double(toconvert);
	printer(numidouble);
}
