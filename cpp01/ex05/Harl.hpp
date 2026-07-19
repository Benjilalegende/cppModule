/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/13 15:05:27 by bribot            #+#    #+#             */
/*   Updated: 2026/07/13 15:14:08 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL_HPP
# define HARL_HPP

#include "Harl.h"

class	Harl
{
	public:
	void	complain(std::string level);

	private:
	void debug( void );
	void info( void );
	void warning( void );
	void error( void );
};

#endif
