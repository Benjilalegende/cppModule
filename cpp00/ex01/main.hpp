/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/02 15:41:37 by benji             #+#    #+#             */
/*   Updated: 2026/07/06 15:58:16 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MAIN_HPP
# define MAIN_HPP

#include <string>
#include <iostream>
#include <unistd.h>
#include "phonebook.hpp"

// CONSTRUCTORS

void	get_info(std::string to_ask, std::string *to_put);
int	info_are_good(std::string content_keeper[4]);

#endif