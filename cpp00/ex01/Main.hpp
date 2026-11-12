/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:41:37 by benji             #+#    #+#             */
/*   Updated: 2026/08/09 14:45:26 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <string>
#include <iostream>
#include <iomanip>
#include <unistd.h>
#include "PhoneBook.hpp"

// CONSTRUCTORS

void	get_info(std::string to_ask, std::string *to_put);
int	info_are_good(std::string content_keeper[5]);
void	search_contact(PhoneBook *phone);

#endif
