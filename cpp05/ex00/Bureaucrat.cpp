/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:27:40 by benji             #+#    #+#             */
/*   Updated: 2026/10/25 15:52:47 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(int grade_to_put, std::string name_to_put) : Name(name_to_put)
{
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
