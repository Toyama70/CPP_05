/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exception.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/14 19:19:16 by yasinbestri       #+#    #+#             */
/*   Updated: 2022/04/17 16:24:00 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef EXCEPTION_HPP
#define EXCEPTION_HPP

#include <string>
#include <iostream>
#include <exception>

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