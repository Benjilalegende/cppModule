/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 17:54:11 by bribot            #+#    #+#             */
/*   Updated: 2026/07/20 19:55:59 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string Name)
{
	std::cout << "Claptrap Default constructor called" << std::endl;
	this->Name = Name;
}

ClapTrap::ClapTrap(const ClapTrap& tocopy)
{
	std::cout << "Claptrap Copy Constructor Called" << std::endl;
	this->Name = tocopy.Name;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& other)
{
	if (this != &other)
	{
		std::cout << "Claptrap Operator= Called" << std::endl;
		*this = other;
	}
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap destroyer Called" << std::endl;
	return ;
}

std::string ClapTrap::Get_Name()
{
	std::cout << "Claptrap GetName Called" << std::endl;
	return (Name);
}

void	ClapTrap::attack(const std::string &target)
{
	if (Energy_Point >= 1 && Hit_Point >= 1)
	{
		std::cout << "ClapTrap " << Name << " attacks " << target <<
		", causing " << Attack_Damage << " points of damage!" << std::endl;
		Energy_Point--;
	}
	else
	{
		std::cout << Name << " Cant attack " << target << std::endl;
	}
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap : " << Name << " Take " << amount << " of Damage" << std::endl;
	if (Hit_Point - amount >= Hit_Point)
		Hit_Point = 0;
	else
		Hit_Point -= amount;
	if (Hit_Point < 0)
		Hit_Point = 0;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (Energy_Point >= 1 && Hit_Point >= 1)
	{
		std::cout << "ClapTrap " << Name << " repaired himself of " <<
		amount << " Hit_Point" << std::endl;
		Energy_Point--;
		if (Hit_Point + amount < Hit_Point)
			Hit_Point = 2147483647;
		Hit_Point += amount;
	}
	else
	{
		std::cout << Name << " Cant repair " << std::endl;
	}
}
