/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:36:23 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 17:06:47 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include "Animal.h"

class Animal
{
	public :
	Animal();
	Animal(Animal& other);
	Animal &operator=(Animal& to_copy);
	virtual ~Animal();
	virtual void makeSound() const;

	protected:
	std::string type;

};



#endif
