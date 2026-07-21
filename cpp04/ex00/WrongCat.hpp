/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 17:51:47 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 17:52:20 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef WRONGCAT_HPP
# define WRONGCAT_HPP

#include "WrongCat.h"

class WrongCat : public WrongAnimal
{
	public :
	WrongCat();
	WrongCat(WrongCat& other);
	WrongCat& operator=(WrongCat& to_copy);
	~WrongCat();
	void makeSound(void) const;


};

#endif
