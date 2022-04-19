/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:53:39 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/19 20:51:34 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Bureaucrat MichaelScott("Michael Scott");
	MichaelScott.setGrade(50);

	Intern random;
	Form* rrf = NULL;
	rrf = random.makeForm("PresidentialPardonForm", "John");

	MichaelScott.signForm(* rrf);

	delete rrf;
}