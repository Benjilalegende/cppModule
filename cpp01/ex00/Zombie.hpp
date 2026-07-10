/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:34:51 by benji             #+#    #+#             */
/*   Updated: 2026/07/10 18:46:58 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

class Zombie
{
	public:
		Zombie();
		void Zombie_destroyer(Zombie *Zombie);
		Zombie *newZombie(std::string name);
		void	randomChump( std::string name);
		void announce(void);

	private:
		std::string name;
};
