/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:53:39 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/19 18:37:23 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Exception.hpp"
#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Form.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	Bureaucrat MichaelScott("Michael Scott");
	RobotomyRequestForm doc("target");
	PresidentialPardonForm doc3("John Wick");
	MichaelScott.setGrade(1);
	
	MichaelScott.signForm(doc3);

	MichaelScott.executeForm(doc3);



	/*Bureaucrat DwightSchrute("Dwight Schrute");
	
	MichaelScott.setGrade(25);
	DwightSchrute.setGrade(50);

	//throwing exceptions
	//Foo.setStatus(true); use a signature function


	std::cout << std::endl;
	std::cout << "Testing signatures"<< std::endl;

	std::cout << std::endl;
	std::cout << "Working signature test and no double signature :" << std::endl;
	std::cout << std::endl;


	std::cout << std::endl;

	
	std::cout << "Not working signature test :" << std::endl;
	std::cout << std::endl;


	std::cout << std::endl << "End of program" << std::endl;*/
}