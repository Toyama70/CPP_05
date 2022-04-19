/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:04:11 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/19 18:07:14 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMY_REQUEST_FORM_HPP
#define ROBOTOMY_REQUEST_FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Exception.hpp"
#include "Form.hpp"

class RobotomyRequestForm : public Form {
	public :
	RobotomyRequestForm();
	RobotomyRequestForm(std::string name);
	~RobotomyRequestForm();
	RobotomyRequestForm(RobotomyRequestForm& other);
	RobotomyRequestForm& operator=(const RobotomyRequestForm& rhs);

	virtual void	execute(const class Bureaucrat& executor) const;
	virtual void 	getAbstract();
} ;


#endif