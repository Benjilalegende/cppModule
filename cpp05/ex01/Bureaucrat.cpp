/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:27:40 by benji             #+#    #+#             */
/*   Updated: 2026/10/28 17:57:16 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade_to_put, std::string name_to_put) : Name(name_to_put)
{
	if (grade_to_put <= 0)
		throw Bureaucrat::GradeTooHighException();
	if (grade_to_put >= 151)
		throw Bureaucrat::GradeTooLowException();
	Grade = grade_to_put;
}

Bureaucrat::~Bureaucrat()
{

}

Bureaucrat::Bureaucrat(Bureaucrat& to_copy) : Name(to_copy.GetName())
{
	this->Grade = to_copy.GetGrade();
}

Bureaucrat& Bureaucrat::operator=(Bureaucrat& to_copy)
{
	if (this == &to_copy)
		return *this;

	this->Grade = to_copy.Grade;
	return *this;
}

int	Bureaucrat::GetGrade()
{
	return (this->Grade);
}

std::string Bureaucrat::GetName()
{
	return (this->Name);
}

void	Bureaucrat::increment()
{
	if (this->Grade - 1 <= 0)
		throw Bureaucrat::GradeTooHighException();
	this->Grade++;
}

void	Bureaucrat::decrement()
{
	if (this->Grade + 1 >= 151)
		throw Bureaucrat::GradeTooLowException();
	this->Grade--;
}

std::ostream &operator<<(std::ostream &o, Bureaucrat& to_put)
{
	o << to_put.GetName() << ", bureaucrat grade " << to_put.GetGrade();
	return (o);
}

void	Bureaucrat::signForm(Form& to_sign)
{
	try
	{
		to_sign.beSigned(*this);
	}
	catch (Form::GradeTooLowException& e)
	{
		std::cout << this->GetName() << " couldn't sign " << to_sign.get_Name() << " because Grade_to_low";
	}
	std::cout << this->GetName() << " signed " << to_sign.get_Name() << std::endl;
}
