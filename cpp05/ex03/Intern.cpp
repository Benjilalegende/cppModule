/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/05 14:18:27 by benji             #+#    #+#             */
/*   Updated: 2026/11/05 19:58:59 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{

}

Intern::~Intern()
{

}

Intern::Intern(Intern &to_copy)
{
	(void)to_copy;
}

Intern &Intern::operator=(Intern &to_assign)
{
	(void)to_assign;
	return (*this);
}

AForm	*Intern::makeForm(std::string form, std::string target)
{
	std::string tab_form[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};
	int i = 0;
	AForm *rrf = NULL;
	while (i < 3)
	{
		if (form == tab_form[i])
			break ;
		i++;
	}
	switch (i)
	{
		case 0 :
			rrf = new RobotomyRequestForm(target);
			break;
		case 1 :
			rrf = new ShrubberyCreationForm(target);
			break;
		case 2 :
			rrf = new PresidentialPardonForm(target);
			break;
	}
	if (i <= 2)
	{
		std::cout << "Intern create " << form << std::endl;
		return (rrf);
	}
	if (i == 3)
	{
		std::cout << "Intern can t create " << form << "cau'se it not exist" << std::endl;
		return (NULL);
	}
	return (NULL);
}
