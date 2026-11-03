/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: benji <benji@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/03 15:04:02 by benji             #+#    #+#             */
/*   Updated: 2026/11/03 17:40:20 by benji            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	public :
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(PresidentialPardonForm& to_copy);
	PresidentialPardonForm& operator=(PresidentialPardonForm& to_assign);
	~PresidentialPardonForm();

	void execute_form() const;
	std::string get_Name() const;
	private:
	std::string _target;
};


#endif
