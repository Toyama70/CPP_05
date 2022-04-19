/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/19 19:22:55 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/19 20:17:27 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Exception.hpp"
#include "Form.hpp"

class Intern {

	public :
	Intern();
	Intern(std::string name);
	~Intern();
	Intern(Intern& other);
	Intern& operator=(const Intern& rhs);
	
	Form*	makeForm(std::string formName, std::string target);
	Form*	shrubs(std::string target);
	Form*	robots(std::string target);
	Form*	prez(std::string target);
} ;


#endif