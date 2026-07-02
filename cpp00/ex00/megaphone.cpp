/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 16:59:22 by benji             #+#    #+#             */
/*   Updated: 2026/07/02 17:31:12 by benji            ###   ########.fr       */
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
		if (str[i] >= 'a' && str[i] <= 'z')
			std::cout << char(str[i] - 32);
		else
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