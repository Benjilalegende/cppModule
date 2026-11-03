/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:35:38 by benji             #+#    #+#             */
/*   Updated: 2026/11/03 18:06:08 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

static void	testForm(AForm& form, Bureaucrat& authorized, Bureaucrat& intern)
{
	std::cout << "\n=== " << form.get_Name() << " ===" << std::endl;
	std::cout << "Execution before signing (expected to fail):" << std::endl;
	authorized.executeForm(form);
	std::cout << "Signature with grade 150 (expected to fail):" << std::endl;
	intern.signAForm(form);
	std::cout << "Signature with grade 1:" << std::endl;
	authorized.signAForm(form);
	std::cout << "Execution with grade 150 (expected to fail):" << std::endl;
	intern.executeForm(form);
	std::cout << "Execution with grade 1:" << std::endl;
	authorized.executeForm(form);
}

int	main(void)
{
	srand(time(NULL));
	Bureaucrat authorized(1, "Authorized");
	Bureaucrat intern(150, "Intern");
	ShrubberyCreationForm shrubbery("ex02_test");
	RobotomyRequestForm robotomy("Bender");
	PresidentialPardonForm pardon("Ford");

	testForm(shrubbery, authorized, intern);
	testForm(robotomy, authorized, intern);
	testForm(pardon, authorized, intern);
	return (0);
}
