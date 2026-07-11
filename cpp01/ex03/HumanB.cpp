/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:45:06 by bribot            #+#    #+#             */
/*   Updated: 2026/07/11 15:58:21 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

HumanB::HumanB(std::string name_entry)
{
	name = name_entry;
}

void	HumanB::attack()
{
	std::cout << name <<  " attacks with their " << weapon->getType()
	<< std::endl;
	return ;
}

void	HumanB::setWeapon(Weapon& Weapon_entry)
{
	weapon = &Weapon_entry;
}
