/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:40:05 by benji             #+#    #+#             */
/*   Updated: 2026/07/11 11:50:43 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

//initialise a 0 chacune des variables de contacts et met set a 0 pour siginifier qu il n est pas enregistre



// Cree chacune des case contact du phone



//Attribue dans une variable temporraire l entree utilisateur pour chaque field, si tout les fields sont corrects l enregistre dans le telephone

void add_contact(PhoneBook *phone)
{
	static int i = 0;
	std::string input;
	std::string content_keeper[4];
	
	if (i == 8)
		i = 0;
	get_info("ENTER FIRSTNAME ", &content_keeper[0]);		
	get_info("ENTER LASTNAME ", &content_keeper[1]);
	get_info("ENTER NICKNAME ", &content_keeper[2]);
	get_info("ENTER PHONENUMBER ", &content_keeper[3]);
	get_info("ENTER DARKEST SECRET ", &content_keeper[4]);
	if (info_are_good(content_keeper))
	{
		std::cout << "INFORMATION ENREGISTREES" << std::endl;
		phone->PhoneBook_setter(i, content_keeper);
		i++;
		return ; 
	}
	std::cout << "INFORMATION INCORECTES --> NON ENREGISTREES~" << std::endl;
}

//initialise phone puis sert a rediriger le programme en fonction de l input utilisateur

int main(void)
{
	PhoneBook phone;
	std::string input;
	
	while (std::cin >> input)
	{
		if (input == "EXIT")
			return (0);
		if (input == "ADD")
			add_contact(&phone);
		if (input == "SEARCH")
			search_contact(&phone);
	}
	return (1);
}