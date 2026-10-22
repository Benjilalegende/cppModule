/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:59:55 by bribot            #+#    #+#             */
/*   Updated: 2026/08/08 09:37:56 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef Dog_HPP
# define Dog_HPP

#include "Dog.h"

class Dog : public Animal
{
	public :
	Dog();
	Dog(Dog& other);
	Dog& operator=(Dog& to_copy);
	~Dog();
	void makeSound(void) const;
	std::string getType();

	private :
	Brain *brain;

};

#endif
