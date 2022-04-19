/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:19:42 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/17 16:41:21 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Exception.hpp"
#include "Form.hpp"

class ShrubberyCreationForm : public Form {
	public :
	ShrubberyCreationForm();
	ShrubberyCreationForm(std::string name);
	~ShrubberyCreationForm();
	ShrubberyCreationForm(ShrubberyCreationForm& other);
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& rhs);

	virtual void	execute(const class Bureaucrat& executor) const;
	virtual void getAbstract();
} ;




#endif