/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   newZombie.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:58:35 by benji             #+#    #+#             */
/*   Updated: 2026/07/10 14:26:29 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *Zombie::newZombie(std::string name)
{
	Zombie *zombie;

	zombie = new Zombie;
	zombie->name = name;
	return (zombie);
}
