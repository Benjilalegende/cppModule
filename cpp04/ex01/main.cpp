/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:17:41 by bribot            #+#    #+#             */
/*   Updated: 2026/08/08 12:45:56 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main()
{
	// const Animal* meta = new Animal();
	// const Animal* j = new Dog();
	Cat i;

	i.put_in_brain("PROUT", 20);
		Cat j(i);

	std::cout << "REPONSE " << j.get_from_brain(20) << std::endl;
	// //PARTIE DU TAB
	// const Animal* tab[100];
	// for (int k = 0; k < 50; k++)
	// 	tab[k] = new Cat();
	// for (int k = 50; k < 100; k++)
	// 	tab[k] = new Dog();
	// for (int k = 0; k < 100; k++)
	// 	delete tab[k];
	// delete i;
	// delete j;
	// delete meta;
	return 0;
}
