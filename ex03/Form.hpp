/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:42:14 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/19 20:51:55 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include <iostream>
#include <exception>
#include "Exception.hpp"
#include "Bureaucrat.hpp"

class Form {

	public:

	Form();
	Form(std::string name, const int stampReq, const int execReq);
	virtual ~Form();
	Form(Form& other);
	Form& operator=(const Form& rhs);

	std::string	getName() const;
	int		 			getStampReq()const;
	int					getExecReq()const;
	bool			getSignStatus()const ;
	const std::string	getTarget()const;
	virtual void		getAbstract() = 0;

	void	setStatus(bool signStatus);
	void	setName(std::string& name);
	void	setStampReq(int stampReq);
	void	setExecReq(int ExecReq);
	void	setTarget(std::string& target);
	
	void	beSigned(class Bureaucrat& signer);// need to add class to make it recognized
	virtual void	execute(const class Bureaucrat& exec) const;

	private:

	std::string	_name;
	std::string	_target;
	bool		_signStatus;
	int			_stampReq;
	int			_execReq;
};


std::ostream    &operator<<(std::ostream & out, Form& form);
#endif