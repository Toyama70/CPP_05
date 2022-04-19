/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:29:13 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/19 18:32:04 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Exception.hpp"
#include "Form.hpp"

class PresidentialPardonForm : public Form {
	public :
	PresidentialPardonForm();
	PresidentialPardonForm(std::string name);
	~PresidentialPardonForm();
	PresidentialPardonForm(PresidentialPardonForm& other);
	PresidentialPardonForm& operator=(const PresidentialPardonForm& rhs);

	virtual void	execute(const class Bureaucrat& executor) const;
	virtual void 	getAbstract();
} ;

#endif