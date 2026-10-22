/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:38:39 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 17:17:28 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal constructor Called" << std::endl;
	return ;
}

Animal::Animal(Animal& other)
{
	std::cout << "Animal copy constructor Called" << std::endl;
	type = other.type;
	return ;
}

Animal &Animal::operator=(Animal& to_copy)
{
		std::cout << "Animal operator= Called" << std::endl;

	if (this != &to_copy)
		this->type = to_copy.type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << " Animal Destructor Called" << std::endl;
	return ;
}

void Animal::makeSound() const
{
	std::cout << "I M AN ANIMAL ROOOOAWW" << std::endl;
	return ;
}
