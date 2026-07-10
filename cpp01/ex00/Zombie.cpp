/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:43:29 by benji             #+#    #+#             */
/*   Updated: 2026/07/10 18:48:34 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

void	Zombie::announce()
{
	std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
	return ;
}

Zombie::Zombie()
{
	return ;
}

void	Zombie::Zombie_destroyer(Zombie *Zombie)
{
	std::cout << name << "has been destroyed";
	delete Zombie;
}
