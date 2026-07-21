/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 17:54:23 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 14:43:11 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"


int main(void)
{
	FragTrap lui("TEST");
	FragTrap prout(lui);

	lui.attack("YAHOOO");
	lui.highFivesGuys();
	// ClapTrap test("AHHH");
	// ClapTrap test2(test);
	// ScavTrap grosprout("tresgrosprout");
	// ScavTrap std(grosprout);

	// test.attack("Prout");
	// test.takeDamage(5);
	// test.takeDamage(2500000000);
	// test.beRepaired(5);
	// test2.attack("Prout2");
	// grosprout.attack("CACA");
	// std.takeDamage(5);
	// std = grosprout;
}
