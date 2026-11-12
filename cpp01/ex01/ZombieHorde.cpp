/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 18:48:50 by benji             #+#    #+#             */
/*   Updated: 2026/08/25 12:49:01 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

Zombie *zombiHorde(int N, std::string name)
{
	Zombie *zombie;

	zombie = new Zombie[N];
	if (!zombie)
		return (NULL);
	int i = 0;
	while (i < N)
	{
		zombie[i].putname(name);
		i++;
	}
	i = 0;
	return (zombie);
}
