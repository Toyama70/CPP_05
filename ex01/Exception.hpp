/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:19:16 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/14 19:25:48 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include "Bureaucrat.hpp"

struct Exception_1 : public std::exception {
	const char * what() const throw() {
	return ("Grade too low");
	}
};


struct Exception_2 : public std::exception {
	const char * what() const throw() {
	return ("Grade too high");
	}
};

#endif