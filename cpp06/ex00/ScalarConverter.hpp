/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:33:52 by bribot            #+#    #+#             */
/*   Updated: 2026/11/11 18:08:11 by bribot           ###   ########.fr       */
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
	DOUBLE,
	INVALID
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

t_type recognize_type(const std::string &to_verify);

//PRINTERS
void print_invalid(std::string to_put);
void	printer_double(std::string to_print);
void	printer_int(std::string to_put);
void	printer_char(std::string to_put);
void	printer_float(std::string to_put);





#endif
