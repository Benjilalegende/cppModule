/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:20:20 by bribot            #+#    #+#             */
/*   Updated: 2026/07/11 15:56:37 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

#include "HumanB.h"

class	HumanB
{
	public:
	HumanB(std::string name_entry);
	void	setWeapon(Weapon& weapon_entry);
	void	attack();

	private:
	std::string name;
	Weapon	*weapon;
};



#endif
