/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:49:18 by bribot            #+#    #+#             */
/*   Updated: 2026/11/11 19:13:18 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP



#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <stdint.h>

typedef struct Data
{
	unsigned int value;
}				Data;

class Serializer
{
	public :
	static uintptr_t serialize(Data* ptr);
	static Data* deserialize(uintptr_t raw);

	private :
	Serializer();
	~Serializer();
	Serializer &operator=(Serializer &to_assign);
	Serializer(Serializer &to_copy);
};

#endif
