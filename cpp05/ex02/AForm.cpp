/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:36:42 by benji             #+#    #+#             */
/*   Updated: 2026/11/05 20:06:41 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"

AForm::AForm(std::string Name, int grade_sign, int grade_exec) : _Name(Name), _is_signed(false), _grade_sign(grade_sign), _grade_exec(grade_exec)
{
	if (grade_sign <= 0 || grade_exec <= 0)
		throw AForm::GradeTooHighException();
	if (grade_sign > 150 || grade_exec > 150)
		throw AForm::GradeTooLowException();
}

AForm::~AForm()
{

}

AForm::AForm() : _Name("NONE"), _is_signed(false), _grade_sign(0), _grade_exec(0)
{

}

AForm::AForm(AForm& to_copy) : _Name(to_copy._Name), _is_signed(to_copy._is_signed), _grade_sign(to_copy._grade_sign), _grade_exec(to_copy._grade_exec)
{
}

AForm& AForm::operator=(AForm& to_assign)
{
	if (this == &to_assign)
		return *this;
	this->_is_signed = to_assign._is_signed;
	return *this;
}

//GETERS

std::string AForm::get_Name() const
{
	return (_Name);
}

bool AForm::get_is_signed()
{
	return (_is_signed);
}

int AForm::get_grade_sign()
{
	return(_grade_sign);
}

int	AForm::get_grade_exec()
{
	return (_grade_exec);
}

//OSTREAM

std::ostream &operator<<(std::ostream &o, AForm& to_put)
{
	o << "Name = " << to_put.get_Name() << std::endl << "is signed = " << to_put.get_is_signed()
	<< std::endl << "grade needed to sign = " << to_put.get_grade_sign() << std::endl
	<< "grade needed to exec = " << to_put.get_grade_exec();
	return (o);
}

//FUNCTIONS

void	AForm::beSigned(Bureaucrat& who)
{
	if (this->_grade_sign < who.GetGrade())
	{
		throw AForm::GradeTooLowException();
	}
	this->_is_signed = true;
}

void	AForm::execute(Bureaucrat const & executor) const
{
		// std::cout << "exec" << std::endl;

	if (this->_is_signed == 0)
		throw (AForm::FormNotSignedException());
	else if (this->_grade_exec <= executor.GetGrade())
		throw (AForm::GradeTooLowException());
	else
	{
		std::cout << executor.GetName() << " exec " << this->_Name << std::endl;
		this->execute_form();
	}
}
