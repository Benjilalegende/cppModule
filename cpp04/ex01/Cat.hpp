/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:50:43 by bribot            #+#    #+#             */
/*   Updated: 2026/08/08 10:14:26 by benji            ###   ########.fr       */
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
	void	put_in_brain(std::string to_put, int place);
	std::string get_from_brain(int place);

	private :
	Brain *brain;
};

#endif
