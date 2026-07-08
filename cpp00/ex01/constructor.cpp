/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   constructor.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 13:55:47 by bribot            #+#    #+#             */
/*   Updated: 2026/07/08 17:40:06 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

void	PhoneBook::PhoneBook_setter(int i, std::string to_set[5])
{
	stock[i] = Contact(to_set[0], to_set[1], to_set[2], to_set[3], to_set[4]);
}

PhoneBook::PhoneBook()
{
	int i = 0;

	while (i < 8)
	{
		Contact stock[i];
		i++;
	}
	return ;
}

Contact::Contact()
{
	first_name = "NONE1";
	last_name = "NONE2";
	nickname = "NONE3";
	phone_number = "NONE4";
	darkest_secret = "NONE5";
	set = 0;
}

Contact::Contact(std::string sfirst_name, std::string slast_name, std::string snickname,
			std::string sphone_number, std::string sdarkest_secret)
{
	first_name = sfirst_name;
	last_name = slast_name;
	nickname = snickname;
	phone_number = sphone_number;
	darkest_secret = sdarkest_secret;
	set = 1;
}

int Contact::get_contact_set(Contact contact)
{
	return (contact.set);
}

void	Contact::get_all_info(Contact contact, std::string info[5])
{
	info[0] = contact.first_name;
	info[1] = contact.last_name;
	info[2] = contact.nickname;
	info[3] = contact.phone_number;
	info[4] = contact.darkest_secret;
}

int	PhoneBook::PhoneBook_geter(int i, std::string info[5])
{
	if (stock[i - 1].get_contact_set(stock[i - 1]) == 1)
		return (stock[i - 1].get_all_info(stock[i - 1], info), 1);
	else
		return (0);
}

