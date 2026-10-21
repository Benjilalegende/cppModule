/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:53:50 by bribot            #+#    #+#             */
/*   Updated: 2026/10/21 16:10:43 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor Called" << std::endl;
	brain = new Brain();
	type = "Cat";
}

Cat::Cat(Cat& other) : Animal()
{
	std::cout << "Cat copy constructor Called" << std::endl;
	this->brain = new Brain(*other.brain);
	// this->brain = other.brain;
	this->type = other.type;
}

Cat &Cat::operator=(Cat& to_copy)
{
	std::cout << "Cat Operator= Called" << std::endl;
	if (this != &to_copy)
	{
		this->type = to_copy.type;
		*this->brain = *to_copy.brain;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	delete brain;
	return ;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW" << std::endl;
	return ;
}

void Cat::put_in_brain(std::string to_put, int place)
{
	if (place >= 100 || place < 0)
	{
		std::cout << "emplacement invalide" << std::endl;
		return ;
	}
	brain->set(to_put, place);
}

std::string Cat::get_from_brain(int place)
{
	return (brain->get(place));
}
