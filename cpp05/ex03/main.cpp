/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/25 15:35:38 by benji             #+#    #+#             */
/*   Updated: 2026/11/09 14:05:02 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

// static void	testForm(AForm& form, Bureaucrat& authorized, Bureaucrat& intern)
// {
// 	std::cout << "\n=== " << form.get_Name() << " ===" << std::endl;
// 	std::cout << "Execution before signing (expected to fail):" << std::endl;
// 	authorized.executeForm(form);
// 	std::cout << "Signature with grade 150 (expected to fail):" << std::endl;
// 	intern.signAForm(form);
// 	std::cout << "Signature with grade 1:" << std::endl;
// 	authorized.signAForm(form);
// 	std::cout << "Execution with grade 150 (expected to fail):" << std::endl;
// 	intern.executeForm(form);
// 	std::cout << "Execution with grade 1:" << std::endl;
// 	authorized.executeForm(form);
// }

int	main(void)
{
	srand(time(NULL));
	Intern someRandomIntern;
	Bureaucrat test(1, "tester");
	AForm* rrf;
	rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
	if (rrf)
	{
		test.signAForm(*rrf);
		test.executeForm(*rrf);
	}
	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	if (rrf)
	{
		test.signAForm(*rrf);
		test.executeForm(*rrf);
		// delete (&rrf);
	}
	rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
	if (rrf)
	{
		test.signAForm(*rrf);
		test.executeForm(*rrf);
		// delete (&rrf);
	}
	rrf = someRandomIntern.makeForm("Nothing", "Bender");
	if (rrf)
	{
		test.signAForm(*rrf);
		test.executeForm(*rrf);
		// delete (&rrf);
	}
}
