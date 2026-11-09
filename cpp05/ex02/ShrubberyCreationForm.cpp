/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:03:55 by benji             #+#    #+#             */
/*   Updated: 2026/11/04 18:24:53 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137)
{
	_target = target;
}

ShrubberyCreationForm::ShrubberyCreationForm()
{

}

ShrubberyCreationForm::~ShrubberyCreationForm()
{}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& to_copy) : AForm("ShrubberyCreationForm", 145, 137), _target(to_copy._target)
{

}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm& to_assign)
{
	if (this == &to_assign)
		return (*this);
	this->_target = to_assign._target;
	return (*this);
}

std::string ShrubberyCreationForm::get_Name() const
{
	return ("ShrubberyCreationForm");
}

void	 ShrubberyCreationForm::execute_form() const
{
	std::string name_tmp = _target;

	name_tmp.append("_shrubbery");
	std::ofstream file(name_tmp.c_str());
	if (file.is_open())
	{
		file << "      /\\\n";
        file << "     /\\*\\\n";
        file << "    /\\O\\*\\\n";
        file << "   /*/\\/\\/\\\n";
        file << "  /\\O\\/\\*\\/\\\n";
        file << " /\\*\\/\\*\\/\\/\\\n";
        file << "/\\O\\/\\/*/\\/O/\\\n";
        file << "      ||\n";
        file << "      ||\n";
        file.close();
        std::cout << "File " << name_tmp << " created successfully." << std::endl;
	}
	return ;
}
