/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 18:04:53 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/14 20:09:42 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Exception.hpp"

class Bureaucrat {

	public :
	Bureaucrat();
	Bureaucrat(std::string name);
	~Bureaucrat();
	Bureaucrat(Bureaucrat& other);
	Bureaucrat& operator=(const Bureaucrat& rhs);

	std::string		getName() const;
	int				getGrade() const;
	void			setGrade(const int lvl);

	void			promoteGrade(const int rise);
	void			demoteGrade(int low);

	private :
	const std::string		_name;
	int						_grade;
} ;

std::ostream    &operator<<(std::ostream & out, const Bureaucrat & bureaucrat);

#endif