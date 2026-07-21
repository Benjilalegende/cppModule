/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:50:43 by bribot            #+#    #+#             */
/*   Updated: 2026/07/21 17:15:30 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

#include "Cat.h"

class Cat : public Animal
{
	public :
	Cat();
	Cat(Cat& other);
	Cat& operator=(Cat& to_copy);
	~Cat();
	void makeSound(void) const;


};

#endif
