/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:38:39 by bribot            #+#    #+#             */
/*   Updated: 2026/08/08 12:34:07 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain constructor Called" << std::endl;
	return ;
}

Brain::Brain(Brain& other)
{
	std::cout << "Brain copy constructor Called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->ideas[i] = other.ideas[i];
	return ;
}

Brain &Brain::operator=(Brain& to_copy)
{
		std::cout << "Brain operator= Called" << std::endl;

	if (this != &to_copy)
	{
		for (int i = 0; i < 100; i++)
			this->ideas[i] = to_copy.ideas[i];
	}
	return (*this);
}

Brain::~Brain()
{
	std::cout << " Brain Destructor Called" << std::endl;
	return ;
}

void	Brain::set(std::string to_put, int place)
{
	ideas[place] = to_put;
}

std::string Brain::get(int place)
{
	return (ideas[place]);
}
