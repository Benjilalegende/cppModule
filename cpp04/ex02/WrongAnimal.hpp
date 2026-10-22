/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongAnimal.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:47:51 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 17:48:16 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_HPP
# define WRONGANIMAL_HPP

#include "WrongAnimal.h"

class WrongAnimal
{
	public :
	WrongAnimal();
	WrongAnimal(WrongAnimal& other);
	WrongAnimal &operator=(WrongAnimal& to_copy);
	virtual ~WrongAnimal();
	void makeSound() const;

	protected:
	std::string type;

};



#endif
