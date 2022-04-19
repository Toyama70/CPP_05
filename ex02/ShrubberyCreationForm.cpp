/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:23:45 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/17 16:42:11 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
{
	std::string name = "Random Shrubbery Form";
	this->setName(name);
	this->setStampReq(145);
	this->setExecReq(137);
	this->setStatus(0);
	this->setTarget(name);
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
{
	this->setName(target);
	this->setStampReq(145);
	this->setExecReq(137);
	this->setStatus(0);
	this->setTarget(target);
}

ShrubberyCreationForm::~ShrubberyCreationForm()
{
	return;
}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm& other)
{
	*this = other;
}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& rhs)
{
	return *this;
}

/* Member functions -------------------------------- */

void 	ShrubberyCreationForm::getAbstract()
{
	return;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& executor)const 
{

	//std::cout << "Executing OK OK OK" << std::endl;
	std::string outName = getTarget() + std::string("_shrubbery");
	std::string output;
	output = " ^    ^ \n/ |  /|| \n/||  /|| \n_|_  _|_";

	std::cout << output << std::endl;
}