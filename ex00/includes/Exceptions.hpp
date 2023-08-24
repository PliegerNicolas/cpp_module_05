/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:26:56 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/24 19:28:52 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

#include <stdexcept>
#include <string>

class	GradeTooHighException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Bureaucrat::exception : Grade is too high");
		}
};

class	GradeTooLowException : public std::exception
{
	public:
		virtual const char *what() const throw()
		{
			return ("Bureaucrat::exception : Grade is too low");
		}
};
