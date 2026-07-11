/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 16:17:14 by bribot            #+#    #+#             */
/*   Updated: 2026/07/11 16:39:45 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include <fstream>

int	main(void)
{
	std::ifstream test;


	test.open("infile.txt");
	std::ofstream ahh("outfile.txt");
	ahh << test.rdbuf() << "TEST" << std::endl;
}
