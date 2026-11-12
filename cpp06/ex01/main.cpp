/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/11 18:43:08 by bribot            #+#    #+#             */
/*   Updated: 2026/11/11 22:59:40 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main(void)
{
	Data *tmp = new Data;

	tmp->value = 42;

	uintptr_t tester = Serializer::serialize(tmp);
	tmp = Serializer::deserialize(tester);

	std::cout << tmp->value << std::endl;
	delete (tmp);
	return (0);
}
