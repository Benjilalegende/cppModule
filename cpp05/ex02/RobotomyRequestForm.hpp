/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:04:55 by benji             #+#    #+#             */
/*   Updated: 2026/11/03 17:34:22 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	public :
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(RobotomyRequestForm& to_copy);
	RobotomyRequestForm& operator=(RobotomyRequestForm& to_assign);
	~RobotomyRequestForm();

	void execute_form() const;
	std::string get_Name() const;
	private:
	std::string _target;
};



#endif
