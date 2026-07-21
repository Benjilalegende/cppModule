/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 18:31:13 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 14:23:56 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

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

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destroyer called" << std::endl;
	return ;
}

ScavTrap &ScavTrap::operator=(ScavTrap& to_copy)
{
	std::cout << "ScavTrap operator= called" << std::endl;
	if (this != &to_copy)
	{
		this->Attack_Damage = to_copy.Attack_Damage;
		this->Energy_Point = to_copy.Energy_Point;
		this->Hit_Point = to_copy.Hit_Point;
		this->Name = to_copy.Name;
		this->guardstate = to_copy.guardstate;
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
