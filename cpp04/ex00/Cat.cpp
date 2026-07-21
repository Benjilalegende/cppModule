/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:53:50 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 17:15:52 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal()
{
	std::cout << "Cat constructor Called" << std::endl;
	type = "Cat";
}

Cat::Cat(Cat& other) : Animal()
{
	std::cout << "Cat copy constructor Called" << std::endl;
	this->type = other.type;
}

Cat &Cat::operator=(Cat& to_copy)
{
	std::cout << "Cat Operator= Called" << std::endl;
	if (this != &to_copy)
	{
		this->type = to_copy.type;
	}
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor Called" << std::endl;
	return ;
}

void Cat::makeSound() const
{
	std::cout << "MEOW MEOW" << std::endl;
	return ;
}
