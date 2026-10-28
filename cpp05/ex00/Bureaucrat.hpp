/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 14:16:36 by benji             #+#    #+#             */
/*   Updated: 2026/10/28 15:30:11 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <typeinfo>

class Bureaucrat
{
	public :
	Bureaucrat(int grade_to_put, std::string name_to_put);
	~Bureaucrat();
	Bureaucrat& operator=(Bureaucrat& to_copy);
	Bureaucrat(Bureaucrat& to_copy);
	int	GetGrade();
	std::string GetName();
	void increment();
	void decrement();

	class GradeTooHighException : public std::exception
	{
		public :

	};

	class GradeTooLowException : public std::exception
	{
		public :

	};

	private :
	int	Grade;
	const std::string Name;
};

std::ostream &operator<<(std::ostream &o, Bureaucrat& to_put);

#endif
