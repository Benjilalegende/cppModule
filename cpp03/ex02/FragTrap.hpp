/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 14:09:44 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 14:20:38 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ScavTrap.h"

class FragTrap : public ClapTrap
{
	public :
	FragTrap(std::string Name);
	FragTrap(FragTrap& other);
	FragTrap &operator=(FragTrap& to_copy);
	~FragTrap();
	void	highFivesGuys();

	private:
};

#endif
