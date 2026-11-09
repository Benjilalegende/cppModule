/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/09 16:46:43 by bribot            #+#    #+#             */
/*   Updated: 2026/11/09 20:03:10 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

int main(void)
{
	ScalarConverter::convert("2147483646");
	ScalarConverter::convert("43.12");
	ScalarConverter::convert("test");


}
