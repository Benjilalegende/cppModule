/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/19 17:54:23 by bribot            #+#    #+#             */
/*   Updated: 2026/07/20 16:10:19 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap test("AHHH");
	ClapTrap test2(test);

	test.attack("Prout");
	test.takeDamage(5);
	test.takeDamage(2500000000);
	test.beRepaired(5);
	test2.attack("Prout2");
}
