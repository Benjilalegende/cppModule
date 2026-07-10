/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/07/10 14:41:13 by benji             #+#    #+#             */
/*   Updated: 2026/07/10 18:57:51 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

class	Zombie
{
	public:
	Zombie();
	void announce(void);
	Zombie *zombiHorde(int N, std::string name);

	private:
	std::string name;
};
