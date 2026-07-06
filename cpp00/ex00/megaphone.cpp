/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:59:22 by benji             #+#    #+#             */
/*   Updated: 2026/07/06 14:37:30 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

class Ampli
{
	public:
	Ampli();
	Ampli(std::string);
};

Ampli::Ampli()
{
	std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	return ;
}

Ampli::Ampli(std::string str)
{
	int i = 0;
	while (str[i])
	{
		str[i] = std::toupper(str[i]);
		std::cout << str[i];
		i++;
	}
	
	return ;
}

int main(int ac, char **av)
{
	if (ac == 1)
	{
		Ampli ampli;
		return (0);
	}
	int i = 1;
	while (i < ac)
		Ampli ampli(av[i++]);
	return (0);
}