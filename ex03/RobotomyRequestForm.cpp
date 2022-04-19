/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 18:07:24 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/19 18:33:51 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <ctime>
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm()
{
	std::string name = "Random ROBOTOMIZATION Form";
	this->setName(name);
	this->setStampReq(72);
	this->setExecReq(45);
	this->setStatus(0);
	this->setTarget(name);
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
{
	this->setName(target);
	this->setStampReq(72);
	this->setExecReq(45);
	this->setStatus(0);
	this->setTarget(target);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
	return;
}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm& other)
{
	*this = other;
}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& rhs)
{
	return *this;
}

/* Member functions -------------------------------- */

void 	RobotomyRequestForm::getAbstract()
{
	return;
}

void	RobotomyRequestForm::execute(const Bureaucrat& executor)const 
{

	srand((time(NULL)));
	std::cout << "*drilling* BZZZZZ, BZZZZZ, BZZZZZZ" << std::endl;
	if (rand() % 2 == 0)
	{
		std::cout << this->getTarget() << " has been ROBOTOMIZED with success !" << std::endl;
	}
	else
	{
		std::cout << this->getTarget() << " has NOT been ROBOTOMIZED..." << std::endl;
	}
}