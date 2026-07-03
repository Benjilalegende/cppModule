/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info_contacts.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:55:35 by bribot            #+#    #+#             */
/*   Updated: 2026/07/03 18:49:53 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

int	check_all_int(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
		{
			// std::cout << "TEST";
			return (0);
		}
	}
	return (1);
}

std::string	get_info(std::string to_ask)
{
	std::string input;
	while (1)
	{
		std::cout << to_ask << ": ";
		std::getline(std::cin, input);
		if (to_ask == "ENTER PHONENUMBER " && check_all_int(input) == 1)
			return (input);
		else if (input != "" && to_ask != "ENTER PHONENUMBER ")
			return (input);
		std::cout << std::endl << "INCORECT" << std::endl;
	}
	return (NULL);
}