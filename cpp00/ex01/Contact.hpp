/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/06 12:28:04 by bribot            #+#    #+#             */
/*   Updated: 2026/07/06 15:56:37 by bribot           ###   ########.fr       */
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
	
	private:
	std::string first_name;
	std::string last_name;
	std::string nickname;
	std::string phone_number; 
	std::string darkest_secret;
	int			set;
};

Contact::Contact()
{
	first_name = "NONE1";
	last_name = "NONE2";
	nickname = "NONE3";
	phone_number = "NONE4";
	darkest_secret = "NONE5";
	set = 0;
}

Contact::Contact(std::string sfirst_name, std::string slast_name, std::string snickname,
			std::string sphone_number, std::string sdarkest_secret)
{
	first_name = sfirst_name;
	last_name = slast_name;
	nickname = snickname;
	phone_number = sphone_number;
	darkest_secret = sdarkest_secret;
}

#endif