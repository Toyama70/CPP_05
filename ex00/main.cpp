/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:53:39 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/14 20:03:22 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat MichaelScott("Michael Scott");
	
	std::cout << "My grade is " << MichaelScott.getGrade() << std::endl;
	
	MichaelScott.setGrade(3);


	std::cout << "My name is " << MichaelScott.getName() << std::endl;
	std::cout << "My grade is " << MichaelScott.getGrade() << std::endl;
	MichaelScott.promoteGrade(1);
	std::cout << "My grade is " << MichaelScott.getGrade() << std::endl;
	MichaelScott.promoteGrade(205);
	std::cout << "My grade is " << MichaelScott.getGrade() << std::endl;
	MichaelScott.demoteGrade(5000);
	std::cout << "My grade is " << MichaelScott.getGrade() << std::endl;

	std::cout << std::endl;
	std::cout << "Testing overload" << std::endl;
	std::cout << std::endl;

	MichaelScott.setGrade(-50);

	std::cout << MichaelScott;

	std::cout << "Program finished" << std::endl;
}