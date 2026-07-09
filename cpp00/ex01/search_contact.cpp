/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 12:01:49 by bribot            #+#    #+#             */
/*   Updated: 2026/07/09 16:22:00 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	print_info(std::string	info[5])
{
	int	len;
	int	i = 0;
	
	std::cout << std::endl;
	while (i <= 3)
	{
		len = info[i].length();
		
		if (len >= 10)
		{
			std::cout << std::left << std::setw(9) << info[i].substr(0, 9);
			std::cout << ".";
		}
		else
			std::cout << std::left << std::setw(10) << std::setfill(' ') << info[i];
		if (i != 3)
			std::cout << "| ";
		else
			std::cout << std::endl;
		i++;
	}
}

void	print_info_entre(std::string info[5])
{
	int i = 0;
	while (i <= 4)
		std::cout << info[i++] << std::endl;
}

void	search_contact(PhoneBook *phone)
{
	int	number_contact = 1;
	std::string info[5];
	
	while (phone->PhoneBook_geter(number_contact, info) == 1)
	{
		print_info(info);
		number_contact++;
	}
	std::cout << std::endl << "ENTREZ LE CONTACT A AFFICHER [1 ; 8]: ";
	if (std::cin >> number_contact && number_contact > 0 && number_contact < 9 && phone->PhoneBook_geter(number_contact, info) == 1)
	{
		print_info_entre(info);
		return;
	}
	else
	{
		std::cout << "ENTREE NON VALIDE" << std::endl;
		return ;
	}
}