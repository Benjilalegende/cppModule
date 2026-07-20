/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 18:31:13 by bribot            #+#    #+#             */
/*   Updated: 2026/07/20 19:58:31 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScravTrap.hpp"

ScavTrap::ScavTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "Constructeur ScavTrap" << std::endl;
	Hit_Point = 100;
	Energy_Point = 50;
	Attack_Damage = 20;
}

ScavTrap::ScavTrap(ScavTrap& other) : ClapTrap(other.Name)
{
	std::cout << "Copy Constructeur ScavTrap" << std::endl;
	Hit_Point = other.Hit_Point;
	Energy_Point = other.Energy_Point;
	Attack_Damage = other.Attack_Damage;
	guardstate = other.guardstate;
}

ScavTrap &ScavTrap::operator=(ScavTrap& to_copy)
{
	if (this != &to_copy)
	{

	}
	return (*this);
}

void	ScavTrap::attack(const std::string &target)
{
	if (Energy_Point >= 1 && Hit_Point >= 1)
	{
		std::cout << "ScavTrap " << Name << " attacks " << target <<
		", causing " << Attack_Damage << " points of damage!" << std::endl;
		Energy_Point--;
	}
	else
	{
		std::cout << Name << " Cant attack " << target << std::endl;
	}
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << Name << " is now in Gatekeeper mode" << std::endl;
	guardstate = 1;
}
