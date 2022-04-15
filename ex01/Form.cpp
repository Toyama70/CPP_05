/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:57:05 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/15 14:18:49 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

Form::Form()
: _stampReq(150), _execReq(150), _name("random document"), _signStatus(false)
{
	std::cout << "Default constructor" << std::endl;
	return;
}

Form::~Form()
{
	std::cout << "Default destructor" << std::endl;
	return;
}

Form::Form(std::string name, const int stampReq, const int execReq)
: _stampReq(stampReq), _execReq(execReq), _name(name), _signStatus(false)
{
	std::cout << "Copy Constructor" << std::endl;
	
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
		delete this;
		return;
	}
	catch(Exception_2& B) // this is the same as std::exception& e. cf struct;
	{
		std::cout << "Exception thrown: " << B.what() << std::endl;
		//delete this;
		return;
	}	
	
	
	
	
	
	return;
}

Form::Form(const Form& other)
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