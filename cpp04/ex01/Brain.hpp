/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/21 16:36:23 by bribot            #+#    #+#             */
/*   Updated: 2026/08/08 10:18:39 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

#include "Brain.h"

class Brain
{
	public :
	Brain();
	Brain(Brain& other);
	Brain &operator=(Brain& to_copy);
	virtual ~Brain();
	void set(std::string, int place);
	std::string get(int place);

	protected:
	std::string ideas[100];

};



#endif
