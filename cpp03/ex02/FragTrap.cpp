/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 14:20:42 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 14:42:38 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string Name) : ClapTrap(Name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	Hit_Point = 100;
	Energy_Point = 100;
	Attack_Damage = 30;
}

FragTrap::FragTrap(FragTrap& other) : ClapTrap(other.Name)
{
	std::cout << "FragTrap copyconstrctor Called" << std::endl;
	Hit_Point = other.Hit_Point;
	Energy_Point = other.Energy_Point;
	Attack_Damage = other.Attack_Damage;
}

FragTrap &FragTrap::operator=(FragTrap& to_copy)
{
	std::cout << "FragTrap operator= Called" << std::endl;
	if (this != &to_copy)
	{
		this->Hit_Point = to_copy.Hit_Point;
		this->Energy_Point = to_copy.Energy_Point;
		this->Attack_Damage = to_copy.Attack_Damage;
	}
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys()
{
	std::cout << "FragTrap Ask to do HighFives" << std::endl;
	return ;
}
