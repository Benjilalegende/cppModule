/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:17:14 by bribot            #+#    #+#             */
/*   Updated: 2026/07/13 15:01:29 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <fstream>

std::string	make_changing(std::string to_change, std::string to_find,
	std::string to_replace)
{
	int	place = 0 - to_replace.size();

	if (to_find == to_replace)
		return (to_change);

	while (to_change.find(to_find, place + to_replace.size()) != -1)
	{
		place = to_change.find(to_find, place + to_replace.size());
		to_change.erase(place, to_find.size());
		to_change.insert(place, to_replace);
	}
	return (to_change);
}

//USE INSERT FIND ERASE APPEND genre faire un truc du style while findstr(2), erase(len str, POS), append(str2)
int	main(int ac, char **av)
{
	std::ifstream infile;
	std::string	outfile;
	std::string	to_change;
	std::string tmp_getline;

	if (ac != 4 || !av[2][0])
		return (1);
	infile.open(av[1]);
	if (!infile.is_open())
		return (1);
	while (getline(infile, tmp_getline))
	{
		to_change.append(tmp_getline);
		to_change.append("\n");
	}
	to_change = make_changing(to_change, av[2], av[3]);
	outfile = av[1];
	outfile.append(".replace");
	std::ofstream ahh(outfile);
	if (ahh.is_open())
		ahh << to_change;
	infile.close();
	ahh.close();
}
