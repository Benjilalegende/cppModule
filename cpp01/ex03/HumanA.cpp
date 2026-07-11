/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:35:47 by bribot            #+#    #+#             */
/*   Updated: 2026/07/11 15:58:30 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA()
{
	return ;
}

HumanA::HumanA(std::string name_entry, Weapon& weapon_entry)
{
	name = name_entry;
	weapon = &weapon_entry;
}

void	HumanA::attack()
{
	std::cout << name <<  " attacks with their " << weapon->getType()
	<< std::endl;
	return ;
}
