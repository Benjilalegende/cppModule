/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 13:20:01 by bribot            #+#    #+#             */
/*   Updated: 2026/08/08 09:09:17 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <unistd.h>

int	main(void)
{
	std::string	str = "HI THIS IS Brain";
	std::string	*stringPTR = &str;
	std::string	&stringREF = str;

	std::cout << std::__addressof(str) << std::endl;
	std::cout << std::__addressof(*stringPTR) << std::endl;
	std::cout << std::__addressof(stringREF) << std::endl;
	std::cout << str << std::endl;
	std::cout << *stringPTR << std::endl;
	std::cout << stringREF << std::endl;
	return (1);
}
