/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:17:41 by bribot            #+#    #+#             */
/*   Updated: 2026/10/22 14:44:30 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"

int	main()
{
	Cat originalCat;
	originalCat.put_in_brain("Chasser les souris", 20);
	Cat copiedCat(originalCat);
	originalCat.put_in_brain("Dormir au soleil", 20);
	if (copiedCat.get_from_brain(20) != "Chasser les souris")
	{
		std::cout << "ECHEC : la copie du chat partage son Brain." << std::endl;
		return (1);
	}
	std::cout << "OK : le chat possede une copie independante de son Brain."
		<< std::endl;

	Cat assignedCat;
	assignedCat = originalCat;
	originalCat.put_in_brain("Jouer avec une pelote", 20);
	if (assignedCat.get_from_brain(20) != "Dormir au soleil")
	{
		std::cout << "ECHEC : l'affectation du chat ne copie pas son Brain."
			<< std::endl;
		return (1);
	}
	std::cout << "OK : l'affectation du chat copie son Brain independamment."
		<< std::endl;

	Animal *animals[100];
	for (int i = 0; i < 50; ++i)
		animals[i] = new Cat();
	for (int i = 50; i < 100; ++i)
		animals[i] = new Dog();

	std::cout << "Son du chat : ";
	animals[0]->makeSound();
	std::cout << "Son du chien : ";
	animals[50]->makeSound();

	for (int i = 0; i < 100; ++i)
		delete animals[i];
	std::cout << "OK : 50 chats et 50 chiens ont ete detruits." << std::endl;
	return (0);
}
