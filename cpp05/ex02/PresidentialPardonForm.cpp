/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:03:29 by benji             #+#    #+#             */
/*   Updated: 2026/11/04 18:23:41 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

PresidentialPardonForm::PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5)
{
	_target = target;
}

PresidentialPardonForm::~PresidentialPardonForm()
{}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& to_copy) : AForm("PresidentialPardonForm", 25, 5), _target(to_copy._target)
{

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm& to_assign)
{
	if (this == &to_assign)
		return (*this);
	this->_target = to_assign._target;
	return (*this);
}

std::string PresidentialPardonForm::get_Name() const
{
	return ("PresidentialPardonForm");
}

void	 PresidentialPardonForm::execute_form() const
{
	std::cout << this->_target << "  has been pardoned by Zaphod Beeblebrox" << std::endl;
	return ;
}
