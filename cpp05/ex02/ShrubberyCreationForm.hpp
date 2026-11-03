/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:05:46 by benji             #+#    #+#             */
/*   Updated: 2026/11/03 17:22:33 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include "AForm.hpp"

class ShrubberyCreationForm : public AForm {
	public :
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(ShrubberyCreationForm& to_copy);
	ShrubberyCreationForm& operator=(ShrubberyCreationForm& to_assign);
	~ShrubberyCreationForm();

	void execute_form() const;
	std::string get_Name() const;
	private:
	std::string _target;
};




#endif
