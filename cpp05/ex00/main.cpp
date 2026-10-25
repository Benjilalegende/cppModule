/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:35:38 by benji             #+#    #+#             */
/*   Updated: 2026/10/25 15:59:08 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int	main(void)
{
	Bureaucrat creation(8, "A");
	Bureaucrat copy(creation);

	if (creation.GetName() == copy.GetName() && creation.GetGrade() == copy.GetGrade())
	{
		std::cout << "copy correct !" << std::endl;
	}
	Bureaucrat test_operator(9, "B");

	test_operator = creation;
	if (test_operator.GetGrade() == creation.GetGrade())
			std::cout << "operator correct !" << std::endl;

	return (0);
}
