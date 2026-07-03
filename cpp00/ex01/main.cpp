/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:40:05 by benji             #+#    #+#             */
/*   Updated: 2026/07/03 19:19:10 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ex01.hpp"

class Contact
{
	public:
	Contact();
	Contact(std::string first_name, std::string last_name, std::string nickname,
			std::string phone_number, std::string darkest_secret);
	
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number; 
	std::string darkest_secret;
	int			set;
};

class PhoneBook
{
	public:	
	PhoneBook();
	PhoneBook(std::string info);

	Contact stock[7];
};

Contact::Contact()
{
	first_name = "NONE1";
	last_name = "NONE2";
	nickname = "NONE3";
	phone_number = "NONE4";
	darkest_secret = "NONE5";
	set = 0;
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

void add_contact(PhoneBook *phone)
{
	static int i = 0;
	std::string input;
	
	if (i == 8)
		i = 0;
	phone->stock[i].first_name = get_info("ENTER FIRSTNAME ");
	phone->stock[i].last_name = get_info("ENTER LASTNAME ");
	phone->stock[i].nickname = get_info("ENTER NICKNAME ");
	phone->stock[i].phone_number = get_info("ENTER PHONENUMBER ");
}

int main(void)
{
	PhoneBook phone;
	std::string input;
	
	while (std::getline(std::cin, input))
	{
		if (input == "EXIT")
			return (0);
		if (input == "ADD")
			add_contact(&phone);
		if (input == "SEARCH")
		break;
	}
	std::cout << phone.stock[0].phone_number << std::endl;
	return (1);
}