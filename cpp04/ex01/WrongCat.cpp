/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:51:04 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 17:51:15 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal()
{
	std::cout << "WrongCat constructor Called" << std::endl;
	type = "WrongCat";
}

WrongCat::WrongCat(WrongCat& other) : WrongAnimal()
{
	std::cout << "WrongCat copy constructor Called" << std::endl;
	this->type = other.type;
}

WrongCat &WrongCat::operator=(WrongCat& to_copy)
{
	std::cout << "WrongCat Operator= Called" << std::endl;
	if (this != &to_copy)
	{
		this->type = to_copy.type;
	}
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor Called" << std::endl;
	return ;
}

void WrongCat::makeSound() const
{
	std::cout << "MEOW MEOW" << std::endl;
	return ;
}
