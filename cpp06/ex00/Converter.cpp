/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Converter.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 17:32:05 by bribot            #+#    #+#             */
/*   Updated: 2026/11/11 18:32:30 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"
#include <cctype>
#include <cstdlib>

t_type recognize_type(const std::string &to_verify)
{
	if (to_verify == "nan" || to_verify == "inf" || to_verify == "+inf"
		|| to_verify == "-inf")
		return (DOUBLE);
	if (to_verify == "nanf" || to_verify == "inff" || to_verify == "+inff"
		|| to_verify == "-inff")
		return (FLOAT);
	if (to_verify.length() == 1
		&& !std::isdigit(static_cast<unsigned char>(to_verify[0])))
		return (CHAR);

	char *end;
	std::strtod(to_verify.c_str(), &end);
	if (end == to_verify.c_str())
		return (INVALID);
	if (*end == '\0')
	{
		if (to_verify.find_first_of(".eE") == std::string::npos)
			return (INT);
		return (DOUBLE);
	}
	if (end[0] == 'f' && end[1] == '\0')
		return (FLOAT);
	return (INVALID);
}

void printer_double(std::string to_put)
{
	double to_print;

	if (to_put == "nan" || to_put == "inf" || to_put == "+inf" || to_put == "-inf")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << to_put << "f" << std::endl;
		std::cout << "double : " << to_put << std::endl;
		return ;
	}

	to_print = atof(to_put.c_str());
	if (static_cast<int>(to_print) >= 0 && static_cast<int>(to_print) <= 127)
	{
		if (static_cast<int>(to_print) >= 32 && static_cast<int>(to_print) <= 126)
			std::cout << "char : '" << static_cast<char>(to_print) << "'" << std::endl;
		else
			std::cout << "char : non printable" << std::endl;
	}
	else
		std::cout << " char : impossible" << std::endl;

	if (static_cast<int>(to_print) >= INT_MIN && static_cast<int>(to_print) <= INT_MAX)
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

void print_invalid(std::string to_put)
{
	(void)to_put;
	std::cout << "char : impossible" << std::endl;
	std::cout << "int : impossible" << std::endl;
	std::cout << "float : impossible" << std::endl;
	std::cout << "double : impossible" << std::endl;
	return ;
}

void	printer_int(std::string to_put)
{
	int to_print;

	to_print = atoi(to_put.c_str());
	if (static_cast<int>(to_print) >= 0 && static_cast<int>(to_print) <= 127)
	{
		if (static_cast<int>(to_print) >= 32 && static_cast<int>(to_print) <= 126)
			std::cout << "char : '" << static_cast<char>(to_print) << "'" << std::endl;
		else
			std::cout << "char : non printable" << std::endl;
	}
	else
		std::cout << " char : impossible" << std::endl;

	if (static_cast<int>(to_print) >= INT_MIN && static_cast<int>(to_print) <= INT_MAX)
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

void	printer_float(std::string to_put)
{
	float to_print;

	if (to_put == "nanf" || to_put == "inff" || to_put == "+inff" || to_put == "-inff")
	{
		std::cout << "char : impossible" << std::endl;
		std::cout << "int : impossible" << std::endl;
		std::cout << "float : " << to_put << std::endl;
		to_put.erase(to_put.size() - 1);
		std::cout << "double : " << to_put << std::endl;
		return ;
	}
	to_print = atof(to_put.c_str());
	if (static_cast<int>(to_print) >= 0 && static_cast<int>(to_print) <= 127)
	{
		if (static_cast<int>(to_print) >= 32 && static_cast<int>(to_print) <= 126)
			std::cout << "char : '" << static_cast<char>(to_print) << "'" << std::endl;
		else
			std::cout << "char : non printable" << std::endl;
	}
	else
		std::cout << " char : impossible" << std::endl;

	if (static_cast<int>(to_print) >= INT_MIN && static_cast<int>(to_print) <= INT_MAX)
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

void	printer_char(std::string to_put)
{
	int to_print;

	to_print = atoi(to_put.c_str());
	if (static_cast<int>(to_print) >= 0 && static_cast<int>(to_print) <= 127)
	{
		if (static_cast<int>(to_print) >= 32 && static_cast<int>(to_print) <= 126)
			std::cout << "char : '" << static_cast<char>(to_print) << "'" << std::endl;
		else
			std::cout << "char : non printable" << std::endl;
	}
	else
		std::cout << " char : impossible" << std::endl;

	if (static_cast<int>(to_print) >= INT_MIN && static_cast<int>(to_print) <= INT_MAX)
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
