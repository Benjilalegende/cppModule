/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:16:36 by benji             #+#    #+#             */
/*   Updated: 2026/11/04 15:56:39 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <string>
#include <exception>

#include "Form.hpp"

class Bureaucrat
{
	public :
	Bureaucrat();
	Bureaucrat(int grade_to_put, std::string name_to_put);
	~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat& to_copy);
	Bureaucrat(Bureaucrat& to_copy);
	int	GetGrade();
	std::string GetName();
	void increment();
	void decrement();
	void signForm(Form& to_sign);
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
