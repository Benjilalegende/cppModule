/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:28:04 by bribot            #+#    #+#             */
/*   Updated: 2026/07/08 17:34:46 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include "main.hpp"

class Contact
{
	public:
	Contact();
	Contact(std::string first_name, std::string last_name, std::string nickname,
			std::string phone_number, std::string darkest_secret); //SETTER
	int	get_contact_set(Contact contact); //GETTER
	void get_all_info(Contact contact, std::string info[5]);
	
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number; 
	std::string darkest_secret;
	int			set;
};



#endif