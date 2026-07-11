/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/11 13:53:00 by bribot            #+#    #+#             */
/*   Updated: 2026/07/11 16:13:32 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

#include "Weapon.h"

class	Weapon
{
	public:
	Weapon();
	Weapon(std::string type_name);
	std::string&	getType();
	void			setType(std::string type_to_put);

	private:
	std::string type;
};

#endif
