/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:16:36 by benji             #+#    #+#             */
/*   Updated: 2026/11/05 20:05:48 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>
#include <time.h>
#include <stdlib.h>
#include <fstream>
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

class Bureaucrat
{
	public :
	Bureaucrat(int grade_to_put, std::string name_to_put);
	Bureaucrat();
	~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat& to_copy);
	Bureaucrat(Bureaucrat& to_copy);
	int	GetGrade() const;
	std::string GetName() const;
	void increment();
	void decrement();
	void signAForm(AForm& to_sign);
	void  executeForm(AForm const & form) const;
	class GradeTooHighException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return "Grade too high";
		}
	};

	class GradeTooLowException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return "Grade too low";
		}
	};

	private :
	int	Grade;
	const std::string Name;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat& to_put);

#endif
