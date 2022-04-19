/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/16 22:23:45 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/19 15:17:24 by ybestrio         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

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
	std::ofstream file1(outName);



	output = " ^    ^ \n/ |  /|| \n/||  /|| \n_|_  _|_";

	file1 << output;

	//std::cout << output << std::endl;
}