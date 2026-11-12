/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:46:43 by bribot            #+#    #+#             */
/*   Updated: 2026/11/11 18:33:07 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void)
{
	std::cout << std::endl << "-------  2147483646  -----------" << std::endl << std::endl;
	ScalarConverter::convert("2147483646");

	std::cout << std::endl << "-------  43.12  -----------" << std::endl << std::endl;

	ScalarConverter::convert("43.12");
	std::cout << std::endl << "-------  test  -----------" << std::endl << std::endl;
	ScalarConverter::convert("test");
	std::cout << std::endl << "-------  0  -----------" << std::endl << std::endl;

	ScalarConverter::convert("0");
	std::cout << std::endl << "-------  10  -----------" << std::endl << std::endl;

	ScalarConverter::convert("10");
	std::cout << std::endl << "-------  nan  -----------" << std::endl << std::endl;

	ScalarConverter::convert("nan");
	std::cout << std::endl << "-------  +inf  -----------" << std::endl << std::endl;

	ScalarConverter::convert("+inf");
	std::cout << std::endl << "-------  -inff  -----------" << std::endl << std::endl;

	ScalarConverter::convert("-inff");
	std::cout << std::endl << "-------  inff  -----------" << std::endl << std::endl;

	ScalarConverter::convert("inff");
	std::cout << std::endl << "-------  nanf  -----------" << std::endl << std::endl;

	ScalarConverter::convert("nanf");
}
