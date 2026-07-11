/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_info_contacts.cpp                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/03 14:55:35 by bribot            #+#    #+#             */
/*   Updated: 2026/07/11 11:55:40 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "main.hpp"

// retourne 1 s il n y a que des char qui sont des chiffres

int	check_all_int(std::string str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] >= '0' && str[i] <= '9')
			i++;
		else
			return (0);
	}
	return (1);
}

// recupere toutes les infos et si elles sont correct par rapport aux specificite les gardes sinon mets la str a ""

void	get_info(std::string to_ask, std::string *to_put)
{
	std::string input;
	
	if (std::cout << to_ask << ": " && std::cin >> input)
	{
		if (to_ask == "ENTER PHONENUMBER " && check_all_int(input) == 1)
			return (*to_put = input, (void)NULL);
		else if (input != "" && to_ask != "ENTER PHONENUMBER ")
			return (*to_put = input, (void)NULL);
	}
	*to_put = "";
	return ;
}

//Si toutes les infos sont bonnes retourne 1 sinon 0

int	info_are_good(std::string content_keeper[4])
{
	int i = 0;
	while (i < 5)
	{
		if (content_keeper[i] == "")
			return (0);
		i++;
	}
	return (1);
}