/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:04:14 by bribot            #+#    #+#             */
/*   Updated: 2026/07/11 16:12:37 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type_name)
{
	type = type_name;
}

Weapon::Weapon()
{
	return ;
}

std::string&	Weapon::getType()
{
	std::string&	typeREF = type;
	return (typeREF);
}

void	Weapon::setType(std::string type_to_put)
{
	type = type_to_put;
	return ;
}
