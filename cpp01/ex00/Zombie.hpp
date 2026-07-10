/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:34:51 by benji             #+#    #+#             */
/*   Updated: 2026/07/10 14:35:35 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

class Zombie
{
	public:
		Zombie();
		Zombie *newZombie(std::string name);
		void	randomChump( std::string name);
		void announce(void);

	private:
		std::string name;
};
