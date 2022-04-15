/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:24:40 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/14 20:09:50 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

/* Canonical */

Bureaucrat::Bureaucrat()
: _name("Anonymous")
{
	std::cout << "Bureaucrat created" << std::endl;
	this->_grade = 150;
}

Bureaucrat::Bureaucrat(std::string name)
: _name(name)
{
	std::cout << "Bureaucrat created" << std::endl;
	this->_grade = 150;
}

Bureaucrat::~Bureaucrat()
{
	std::cout << "Bureaucrat deleted" << std::endl;
}

Bureaucrat::Bureaucrat(Bureaucrat& other)
{
	*this = other;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& rhs)
{
	//if parameter is modified, should apply it // deep copy
	return *this;
}

/* Getters */

std::string	Bureaucrat::getName() const
{
	return (this->_name);
}

int	Bureaucrat::getGrade() const
{
	return (this->_grade);
}

/* Setters */

void	Bureaucrat::setGrade(const int lvl)
{
	try
	{
		if (lvl > 150)
			throw Exception_1();
		if (lvl < 1)
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
	this->_grade = lvl;
}

/* Member functions */

void	Bureaucrat::demoteGrade(const int rise)
{
	try
	{
		if (this->getGrade() + rise > 150)
			throw Exception_1();
		if (this->getGrade() + rise< 1)
			throw Exception_2();
	}
	catch(Exception_1 A)
	{
		std::cout << "Exception thrown: " << A.what() << std::endl;
		return;
	}
	catch(Exception_2 B)
	{
		std::cout << "Exception thrown: " << B.what() << std::endl;
		return;
	}	
	this->setGrade(getGrade() + rise);
}

void	Bureaucrat::promoteGrade(int low)
{
	low *= -1;
	try
	{
		if (getGrade() + low > 150)
			throw Exception_1();
		if (getGrade() + low < 1)
			throw Exception_2();
	}
	catch(Exception_1 A)
	{
		std::cout << "Exception thrown: " << A.what() << std::endl;
		return;
	}
	catch(Exception_2 B)
	{
		std::cout << "Exception thrown: " << B.what() << std::endl;
		return;
	}	
	this->setGrade(getGrade() + low);
}

/* Overloads */

std::ostream    &operator<<(std::ostream & out, const Bureaucrat& bureaucrat)
{
	std::cout << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade();
	std::cout << std::endl;
	return out;
}