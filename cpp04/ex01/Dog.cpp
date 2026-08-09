/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:00:44 by bribot            #+#    #+#             */
/*   Updated: 2026/08/08 09:39:03 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal()
{
	std::cout << "Dog constructor Called" << std::endl;
	brain = new Brain();
	type = "Dog";
}

Dog::Dog(Dog& other) : Animal()
{
	std::cout << "Dog copy constructor Called" << std::endl;
	this->brain = new Brain(*other.brain);
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
	delete brain;
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
