/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:00:44 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 17:23:15 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor Called" << std::endl;
	type = "Dog";
}

Dog::Dog(Dog& other) : Animal()
{
	std::cout << "Dog copy constructor Called" << std::endl;
	this->type = other.type;
}

Dog &Dog::operator=(Dog& to_copy)
{
	std::cout << "Dog Operator= Called" << std::endl;
	if (this != &to_copy)
	{
		this->type = to_copy.type;
	}
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor Called" << std::endl;
	return ;
}

void Dog::makeSound() const
{
	std::cout << "BARK BARK" << std::endl;
	return ;
}

std::string Dog::getType()
{
	return(this->type);
}
