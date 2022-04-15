/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybestrio <ybestrio@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/15 11:42:14 by ybestrio          #+#    #+#             */
/*   Updated: 2022/04/15 13:38:10 by ybestrio         ###   ########.fr       */
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
	Form(const Form& other);
	Form& operator=(const Form& rhs);

	const std::string	getName();
	int		 			getStampReq();
	int					getExecReq();
	bool				getSignStatus();

	void	setStampReq(int stampReq);
	void	setExecReq(int execReq);
	void	setStatus(bool signStatus);


	private:

	const std::string	_name;
	bool				_signStatus;
	const int			_stampReq;
	const int			_execReq;
};


#endif