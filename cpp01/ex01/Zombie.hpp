/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bribot <bribot@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:41:13 by benji             #+#    #+#             */
/*   Updated: 2026/07/11 13:53:48 by bribot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Zombie
{
	public:
	Zombie();
	void	putname(std::string name);
	void announce(void);
	Zombie *newZombie(std::string name);

	private:
	std::string name;
};
