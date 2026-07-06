/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:07:41 by bribot            #+#    #+#             */
/*   Updated: 2026/07/06 16:19:56 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	public:	
	PhoneBook();
	PhoneBook(std::string info);
	std::string	PhoneBook_geter(std::string to_get); //GETER
	void	PhoneBook_setter(int i, std::string to_set[4]); //SETER

	private:
	Contact stock[7];
};

PhoneBook::PhoneBook()
{
	int i = 0;

	while (i < 8)
	{
		Contact stock[i];
		i++;
	}
	return ;
}

// # ifndef PHONEBOOK_SETTER
// #  define PHONEBOOK_SETTER

void	PhoneBook::PhoneBook_setter(int i, std::string to_set[4])
{
	stock[i] = Contact(to_set[0], to_set[1], to_set[2], to_set[3], to_set[4]);
}

// # endif

#endif
