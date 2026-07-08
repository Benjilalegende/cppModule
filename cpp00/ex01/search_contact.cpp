/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_contact.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/08 12:01:49 by bribot            #+#    #+#             */
/*   Updated: 2026/07/08 17:54:07 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	print_info(std::string	info[5])
{
	std::cout << info[0] << std::setw(10) << std::setfill('.');
}

void	search_contact(PhoneBook *phone)
{
	int	number_contact;
	std::string info[5];
	
	std::cout << "ENTREZ LE CONTACT A AFFICHER [1 ; 8]:";
	if (std::cin >> number_contact && number_contact > 0 && number_contact < 9 && phone->PhoneBook_geter(number_contact, info) == 1)
	{
		print_info(info);
		// std::cout << info[0];
		return;
	}
	else
	{
		std::cout << "ENTREE NON VALIDE";
		return ;
	}
}