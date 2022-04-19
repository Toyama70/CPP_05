/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:22:52 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/19 20:51:05 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
/* Canonical */

Intern::Intern()
{
	std::cout << "Intern summoned" << std::endl;
}

Intern::Intern(std::string name)
{
	std::cout << "Intern summoned" << std::endl;
}

Intern::~Intern()
{
	std::cout << "Intern erased" << std::endl;
}

Intern::Intern(Intern& other)
{
	*this = other;
}

Intern& Intern::operator=(const Intern& rhs)
{
	return *this;
}

Form*	Intern::shrubs(std::string target)
{
	Form *tmp;
	tmp = new ShrubberyCreationForm(target);
	std::cout << "Intern creates a Shrubbery Form" << std::endl;
	return (tmp);
}

Form*	Intern::robots(std::string target)
{
	Form *tmp;
	tmp = new RobotomyRequestForm(target);
	std::cout << "Intern creates a Robotomy Form" << std::endl;
	return (tmp);
}

Form*	Intern::prez(std::string target)
{
	Form *tmp;
	tmp = new PresidentialPardonForm(target);
	std::cout << "Intern creates a Presidential Form" << std::endl;
	return (tmp);
}

Form*	Intern::makeForm(std::string name, std::string target)
{
	int i = -1;

	Form *ret;

	Form*	(Intern::*funcPTR[3])(std::string target) = {
		&Intern::shrubs,
		&Intern::prez,
		&Intern::robots
	};

	std::string document[] = {
		"ShrubberyCreationForm",
		"PresidentialPardonForm",
		"RobotomyRequestForm"
	};

	while(++i < 3)
	{
		if (name == document[i])
		{
			ret = (this->*funcPTR[i])(target);
			break;
		}
	}
	if (i == 3)
	{
		std::cout << "Intern couldn't create the Form because such a Form doesn't exist." << std::endl;
	}
	return (ret);
}