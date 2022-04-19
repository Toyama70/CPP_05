/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:29:15 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/19 18:45:03 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <fstream>

PresidentialPardonForm::PresidentialPardonForm()
{
	std::string name = "Random Person on Pardon Form";
	this->setName(name);
	this->setStampReq(25);
	this->setExecReq(5);
	this->setStatus(0);
	this->setTarget(name);
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
{
	std::string temp;
	temp = target;
	temp = temp + "'s pardon form";
	this->setName(temp);
	this->setStampReq(25);
	this->setExecReq(5);
	this->setStatus(0);
	this->setTarget(target);
}

PresidentialPardonForm::~PresidentialPardonForm()
{
	return;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm& other)
{
	*this = other;
}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& rhs)
{
	return *this;
}

/* Member functions -------------------------------- */

void 	PresidentialPardonForm::getAbstract()
{
	return;
}

void	PresidentialPardonForm::execute(const Bureaucrat& executor)const 
{
	std::cout << getTarget() << " has been pardoned by Zaphod BeebleBrox." << std::endl;
}