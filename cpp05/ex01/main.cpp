/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:35:38 by benji             #+#    #+#             */
/*   Updated: 2026/10/28 17:59:16 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

void	try_tester_constructor(int grade_to_test, std::string what_should_happen)
{
	std::cout << "should write : " << what_should_happen << std::endl;
	try
	{
		Bureaucrat tester(grade_to_test, "TESTER");
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout <<  "error : Grade_to_high" << std::endl;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout <<  "error : Grade_to_low" << std::endl;
	}
	// catch (std::exception& e)
	// {
	// 	std::cout << "error while creating the class" << std::endl;
	// }
	//2 manieres de faire, soit catch le fait qu il y ai une exception, soit directement catch par type d execption
}

void	try_tester_increment(int base, std::string what_should_happen)
{
	std::cout << "should write : " << what_should_happen << std::endl;

	Bureaucrat* tester = NULL;
	try
	{
		tester = new Bureaucrat(base, "TESTER");
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout <<  "error : Grade_to_high" << std::endl;
		delete tester;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout <<  "error : Grade_to_low" << std::endl;
		delete tester;
	}

	if (tester != NULL)
	{
		std::cout << "creation OK, test Increment :" << std::endl;
		try
		{
			tester->increment();
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout <<  "error : Grade_to_high" << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout <<  "error : Grade_to_low" << std::endl;
		}
		delete tester;
	}
}

void	try_tester_decrement(int base, std::string what_should_happen)
{
	std::cout << "should write : " << what_should_happen << std::endl;

	Bureaucrat* tester = NULL;
	try
	{
		tester = new Bureaucrat(base, "TESTER");
	}
	catch (Bureaucrat::GradeTooHighException& e)
	{
		std::cout <<  "error : Grade_to_high" << std::endl;
		delete tester;
	}
	catch (Bureaucrat::GradeTooLowException& e)
	{
		std::cout <<  "error : Grade_to_low" << std::endl;
		delete tester;
	}

	if (tester != NULL)
	{
		std::cout << "creation OK, test Increment :" << std::endl;
		try
		{
			tester->decrement();
		}
		catch (Bureaucrat::GradeTooHighException& e)
		{
			std::cout <<  "error : Grade_to_high" << std::endl;
		}
		catch (Bureaucrat::GradeTooLowException& e)
		{
			std::cout <<  "error : Grade_to_low" << std::endl;
		}
		delete tester;
	}
}

int	main(void)
{
	Bureaucrat creation(8, "A");
	Bureaucrat copy(creation);

	if (creation.GetName() == copy.GetName() && creation.GetGrade() == copy.GetGrade())
	{
		std::cout << "copy correct !" << std::endl;
	}
	Bureaucrat test_operator(9, "B");

	test_operator = creation;
	if (test_operator.GetGrade() == creation.GetGrade())
			std::cout << "operator correct !" << std::endl;

	std::cout << "-------TEST CONSTRUCTORS :----------" << std::endl;

	try_tester_constructor(151, "Grade_to_low");
	try_tester_constructor(0, "Grade_to_low");
	try_tester_constructor(42, "nothing");

	std::cout << "---------TEST increment---------" << std::endl;
	try_tester_increment(1, "Grade_to_high");
	try_tester_increment(42, "nothing");

	std::cout << "---------TEST decrement---------" << std::endl;
	try_tester_decrement(150, "Grade_to_low");
	try_tester_decrement(42, "nothing");

	std::cout << "-----------TEST ostream-----------" << std::endl;

	std::cout << test_operator << std::endl;


	std::cout << "--------FORM TEST----------" << std::endl;

	Form

	return (0);
}
