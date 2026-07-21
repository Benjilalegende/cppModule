/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScravTrap.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/20 16:25:29 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 13:36:26 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCRAVTRAP_HPP
# define SCRAVTRAP_HPP

#include "ScravTrap.h"

class	ScavTrap : public ClapTrap
{
	public :
	ScavTrap(std::string Name); //Default Constructor
	ScavTrap(ScavTrap& other); //copy Constructor
	ScavTrap &operator=(ScavTrap& to_copy); //operator
	~ScavTrap(); //Destroyer

	void	attack(const std::string& target);
	void	guardGate();
	private:
	int guardstate = 0;
};

#endif
