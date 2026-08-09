/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:36:23 by bribot            #+#    #+#             */
/*   Updated: 2026/08/08 12:46:27 by benji            ###   ########.fr       */
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
	// virtual void	put_in_brain(std::string to_put, int place);
	// virtual std::string get_from_brain(int place);

	protected:
	std::string type;

};



#endif
