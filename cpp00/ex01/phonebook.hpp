/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 14:07:41 by bribot            #+#    #+#             */
/*   Updated: 2026/07/08 17:49:13 by bribot           ###   ########.fr       */
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
	int	PhoneBook_geter(int i, std::string info[5]); //GETER
	void	PhoneBook_setter(int i, std::string to_set[5]); //SETER

	private:
	Contact stock[7];
};



#endif
