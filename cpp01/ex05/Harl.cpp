/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:07:18 by bribot            #+#    #+#             */
/*   Updated: 2026/07/13 15:39:15 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

void Harl::debug(void)
{
	std::cout << "debug message" << std::endl;
}

void Harl::info(void)
{
	std::cout << "info message" << std::endl;
}

void Harl::warning(void)
{
	std::cout << "warning message" << std::endl;
}

void Harl::error(void)
{
	std::cout << "error message" << std::endl;
}

void	Harl::complain(std::string level)
{
	void	(Harl::*pf)(void);
	Harl harl;

	pf = NULL;
	switch (level[0])
	{
		case '0':
			pf = &Harl::debug;
			break;
		case '1':
			pf = &Harl::info;
			break;
		case '2':
			pf = &Harl::warning;
			break;
		case '3':
			pf = &Harl::error;
			break;
	}
	if (pf)
		(harl.*pf)();
}
