/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:17:41 by bribot            #+#    #+#             */
/*   Updated: 2026/10/21 15:54:55 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int	main()
{
	const Animal *animals[3];
	animals[0] = new Animal();
	animals[1] = new Dog();
	animals[2] = new Cat();

	std::cout << "\nSons avec liaison dynamique :" << std::endl;
	for (int i = 0; i < 3; ++i)
		animals[i]->makeSound();

	std::cout << "\nSon via WrongAnimal* (liaison non dynamique) :" << std::endl;
	const WrongAnimal *wrongCat = new WrongCat();
	wrongCat->makeSound();

	for (int i = 0; i < 3; ++i)
		delete animals[i];
	delete wrongCat;
	return (0);
}
