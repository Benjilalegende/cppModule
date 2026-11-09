/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:32:05 by bribot            #+#    #+#             */
/*   Updated: 2026/11/09 19:58:53 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

double convert_to_double(std::string to_convert)
{
	return (static_cast<double>(atof(to_convert.c_str())));
}

void printer(double to_print)
{
	if (static_cast<int>(to_print) >= 0 && static_cast<int>(to_print) <= 127)
	{
		if (static_cast<int>(to_print) >= 32 && static_cast<int>(to_print) <= 126)
			std::cout << "char : '" << static_cast<char>(to_print) << "'" << std::endl;
		else
			std::cout << "char : non printable" << std::endl;
	}
	else
		std::cout << " char : impossible" << std::endl;

	if (static_cast<int>(to_print) >= INT_MIN && static_cast<int>(to_print) <= INT_MIN)
		std::cout << "int : " << static_cast<int>(to_print) << std::endl;
	else
		std::cout << "int : impossible" <<std::endl;
	if (to_print == static_cast<int>(to_print))
	{
		std::cout << "float : "  << static_cast<float>(to_print) << ".0f" << std::endl;
		std::cout << "double : " << to_print << ".0" << std::endl;
	}
	else
	{
		std::cout << "float : " <<  static_cast<float>(to_print) << "f" << std::endl;
		std::cout << "double : " << to_print << std::endl;
	}
}

// int is_spe(std::string to_verify)
// {
// 	if ()
// }
