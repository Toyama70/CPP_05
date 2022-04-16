/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yasinbestrioui <yasinbestrioui@student.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:42:14 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/16 20:29:38 by yasinbestri      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include "Bureaucrat.hpp"


class Form {

	public:

	Form();
	Form(std::string name, const int stampReq, const int execReq);
	~Form();
	Form(Form& other);
	Form& operator=(const Form& rhs);

	const std::string	getName();
	int		 			getStampReq();
	int					getExecReq();
	bool				getSignStatus();
	void	setStatus(bool signStatus);
	void	beSigned(class Bureaucrat& signer);// need to add class to make it recognized


	private:

	const std::string	_name;
	bool				_signStatus;
	const int			_stampReq;
	const int			_execReq;
};


std::ostream    &operator<<(std::ostream & out, Form& form);
#endif