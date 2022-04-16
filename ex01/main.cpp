/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:53:39 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/16 20:28:24 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat MichaelScott("Michael Scott");
	Bureaucrat DwightSchrute("Dwight Schrute");
	
	MichaelScott.setGrade(25);
	DwightSchrute.setGrade(50);

	//throwing exceptions
	Form Foo("blabl", 0, 5);
	Form hello("blabla", 1555, 5);
	//Foo.setStatus(true); use a signature function
	std::cout << Foo << std::endl;


	std::cout << std::endl;
	std::cout << "Testing signatures"<< std::endl;

	std::cout << std::endl;
	std::cout << "Working signature test and no double signature :" << std::endl;
	std::cout << std::endl;

	Form app("Application", 45, 5);
	app.beSigned(MichaelScott);
	app.beSigned(DwightSchrute);

	std::cout << std::endl;

	
	std::cout << "Not working signature test :" << std::endl;
	std::cout << std::endl;

	Form app2("High level document", 2, 5);
	app2.beSigned(DwightSchrute); 

	std::cout << std::endl;
	std::cout << "Testing the signForm function :" << std::endl;
	std::cout << std::endl;
	Form app3("Low Level Document", 40, 5);
	DwightSchrute.signForm(app3);
	MichaelScott.signForm(app3);


	std::cout << std::endl << "End of program" << std::endl;
}