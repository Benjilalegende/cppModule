/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:36:42 by benji             #+#    #+#             */
/*   Updated: 2026/10/28 17:44:38 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form(std::string Name, int grade_sign, int grade_exec) : _Name(Name), _grade_exec(grade_exec), _grade_sign(grade_sign)
{
	_is_signed = 0;
}

Form::~Form()
{

}

Form::Form(Form& to_copy) : _Name(to_copy._Name), _grade_exec(to_copy._grade_exec), _grade_sign(to_copy._grade_sign)
{
	this->_is_signed = to_copy._is_signed;
}

Form& Form::operator=(Form& to_assign)
{
	this->_is_signed = to_assign._is_signed;
}

//GETERS

std::string Form::get_Name()
{
	return (_Name);
}

bool Form::get_is_signed()
{
	return (_is_signed);
}

int Form::get_grade_sign()
{
	return(_grade_sign);
}

int	Form::get_grade_exec()
{
	return (_grade_exec);
}

//OSTREAM

std::ostream &operator<<(std::ostream &o, Form& to_put)
{
	o << "Name = " << to_put.get_Name() << std::endl << "is signed = " << to_put.get_is_signed()
	<< std::endl << "grade needed to sign = " << to_put.get_grade_sign() << std::endl
	<< "grade needed to exec = " << to_put.get_grade_exec();
	return (o);
}

//FUNCTIONS

void	Form::beSigned(Bureaucrat& who)
{
	if (this->_grade_sign < who.GetGrade())
	{
		throw Form::GradeTooLowException();
	}
	this->_is_signed = 1;
}
