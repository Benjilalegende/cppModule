/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/28 16:30:52 by benji             #+#    #+#             */
/*   Updated: 2026/11/03 17:20:35 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AForm_HPP
#define AForm_HPP

#include <iostream>
#include <string>
#include <exception>

class Bureaucrat;

class AForm
{
	public :
	AForm(std::string Name, int grade_sign, int grade_exec);
	AForm(AForm& to_copy);
	AForm& operator=(AForm& to_assign);
	~AForm();

	//GETERS

	virtual std::string get_Name() const = 0;
	bool		get_is_signed();
	int		get_grade_sign();
	int		get_grade_exec();

	//FUNCTIONS
	void	beSigned(Bureaucrat& who);
	void	execute(Bureaucrat const & executor) const;
	virtual void execute_form() const = 0;
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
	class FormNotSignedException : public std::exception
	{
		public :
		virtual const char* what() const throw()
		{
			return "Form not Signed";
		}
	};
	private :
	const std::string _Name;
	bool _is_signed;
	const int _grade_sign;
	const int _grade_exec;
};

std::ostream &operator<<(std::ostream &o, AForm& to_put);

#endif
