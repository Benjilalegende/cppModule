/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:30:52 by benji             #+#    #+#             */
/*   Updated: 2026/11/02 15:58:31 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class Form
{
	public :
	Form(std::string Name, int grade_sign, int grade_exec);
	Form(Form& to_copy);
	Form& operator=(Form& to_assign);
	~Form();

	//GETERS

	std::string get_Name();
	bool		get_is_signed();
	int		get_grade_sign();
	int		get_grade_exec();

	//FUNCTIONS
	void	beSigned(Bureaucrat& who);
	// Exception
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
	const std::string _Name;
	bool _is_signed;
	const int _grade_sign;
	const int _grade_exec;
};

std::ostream &operator<<(std::ostream &o, Form& to_put);

#endif
