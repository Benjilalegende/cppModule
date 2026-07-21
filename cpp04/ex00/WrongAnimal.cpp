/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:49:01 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 17:49:04 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal constructor Called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(WrongAnimal& other)
{
	std::cout << "WrongAnimal copy constructor Called" << std::endl;
	type = other.type;
	return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal& to_copy)
{
		std::cout << "WrongAnimal operator= Called" << std::endl;

	if (this != &to_copy)
		this->type = to_copy.type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << " WrongAnimal Destructor Called" << std::endl;
	return ;
}

void WrongAnimal::makeSound() const
{
	std::cout << "I M AN WrongAnimal ROOOOAWW" << std::endl;
	return ;
}
