/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 14:20:11 by bribot            #+#    #+#             */
/*   Updated: 2026/07/11 15:56:42 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

#include "HumanA.h"

class	HumanA
{
	public:
	HumanA();
	HumanA(std::string name_entry, Weapon& weapon_entry);
	void	attack();

	private:
	std::string name;
	Weapon	*weapon;
};




#endif
