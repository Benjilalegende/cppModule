/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 17:53:05 by bribot            #+#    #+#             */
/*   Updated: 2026/07/20 19:07:59 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include "ClapTrap.h"

class ClapTrap
{
	public:
	ClapTrap(std::string Name);
	ClapTrap(const ClapTrap& tocopy);
	ClapTrap& operator=(const ClapTrap& other);
	~ClapTrap();
	std::string Get_Name();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);

	protected:
	std::string	Name;
	int	Hit_Point = 10;
	int	Energy_Point = 10;
	int	Attack_Damage = 0;
};






#endif
