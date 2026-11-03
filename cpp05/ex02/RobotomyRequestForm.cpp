/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:03:50 by benji             #+#    #+#             */
/*   Updated: 2026/11/03 18:11:43 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 72, 45)
{
	_target = target;
}

RobotomyRequestForm::~RobotomyRequestForm()
{}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& to_copy) : AForm("RobotomyRequestForm", 72, 45), _target(to_copy._target)
{

}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm& to_assign)
{
	if (this == &to_assign)
		return (*this);
	this->_target = to_assign._target;
	return (*this);
}

std::string RobotomyRequestForm::get_Name() const
{
	return ("RobotomyRequestForm");
}

void	 RobotomyRequestForm::execute_form() const
{
	std::cout << " DZZZZZZZ DZZZZZZZZZ DZZZZZZ" << std::endl;
	if (rand() % 2 == 1)
		std::cout << _target << " has been robotomized successfully" << std::endl;
	else
		std::cout << _target << " robotomy failed" << std::endl;
	return ;
}
