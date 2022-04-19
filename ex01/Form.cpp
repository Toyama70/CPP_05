/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:57:05 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/17 12:17:49 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form()
: _stampReq(150), _execReq(150), _name("random document"), _signStatus(false)
{
	std::cout << "Default constructor" << std::endl;
	return;
}

Form::~Form()
{
	std::cout << "Destructor called" << std::endl;
	return;
}

Form::Form(std::string name, const int stampReq, const int execReq)
: _stampReq(stampReq), _execReq(execReq), _name(name), _signStatus(false)
{
	std::cout << "Constructor with arguments" << std::endl;
	try
	{
		if (_stampReq > 150)
			throw Exception_1();
		if (_execReq > 150)
			throw Exception_1();
		if (_stampReq < 1)
			throw Exception_2();
		if (_execReq < 1)
			throw Exception_2();
	}
	catch(Exception_1& e) // this is the same as std::exception& e. cf struct;
	{
		std::cout << "Exception thrown: " << e.what() << std::endl;
		return;
	}
	catch(Exception_2& B) // this is the same as std::exception& e. cf struct;
	{
		std::cout << "Exception thrown: " << B.what() << std::endl;
		return;
	}	
	return;
}

Form::Form(Form& other)
: _stampReq(other._stampReq), _execReq(other._execReq), _name(other._name)
{
	std::cout << "Assignment constructor" << std::endl;
	return ;
}

const std::string	Form::getName()
{
	return _name;
}

int			Form::getStampReq()
{
	return _stampReq;
}

int			Form::getExecReq()
{
	return _execReq;
}

bool		Form::getSignStatus()
{
	return _signStatus;
}

void	Form::setStatus(bool signStatus)
{
	this->_signStatus = signStatus;
}

void	Form::beSigned(Bureaucrat& signer)
{
	if (_signStatus == 1)
	{
		std::cout << getName() << " is already signed" << std::endl;
		return ;
	}
	try
	{
		if(signer.getGrade() > getStampReq())
			throw Exception_1();
	}
	catch(Exception_1& e)
	{
		std::cout << signer.getName() << " couldn't sign " << getName();
		std::cout << " because : " << e.what() << std::endl;
	}
	if(signer.getGrade() <= this->getStampReq() && getStampReq() <= 150)
	{
		setStatus(1);
		std::cout << getName() << " has been signed by " << signer.getName() << std::endl;
		return;
	}
}

/* Overloads */

Form& Form::operator=(const Form& rhs)
{
	return *this;
}

std::ostream    &operator<<(std::ostream & out, Form& form)
{
	std::cout <<  "Form name : " << form.getName() << std::endl;
	std::cout << "Form sign level requirement: " << form.getStampReq() << std::endl;
	std::cout << "Form execution level requirement: " << form.getExecReq() << std::endl;
	std::cout << "Signature status = " << form.getSignStatus() << std::endl;
	return out;
}