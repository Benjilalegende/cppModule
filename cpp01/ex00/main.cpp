/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 13:31:54 by benji             #+#    #+#             */
/*   Updated: 2026/07/10 14:24:19 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.h"

int	main(void)
{
	Zombie *zombie;
	
	zombie = zombie->newZombie("test");
	zombie->announce();
	delete zombie;
	std::cout << std::endl;
	zombie->randomChump("TEST2");
	return (0);
}