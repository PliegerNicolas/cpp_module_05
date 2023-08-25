/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Exceptions.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nicolas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 19:26:56 by nicolas           #+#    #+#             */
/*   Updated: 2023/08/25 15:30:08 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <stdexcept>
# include <string>

class GradeTooHighException : public std::exception
{
	private:
		std::string _errorMessage;

	public:
		GradeTooHighException(const char* className)
		{
			_errorMessage = className + std::string("::exception") + " : Grade is too high";
		}

	virtual const char* what() const throw()
	{
		return _errorMessage.c_str();
	}
};

class GradeTooLowException : public std::exception
{
	private:
		std::string _errorMessage;

	public:
		GradeTooLowException(const char* className)
		{
			_errorMessage = className + std::string("::exception") +  " : Grade is too low";
		}

	virtual const char* what() const throw()
	{
		return _errorMessage.c_str();
	}
};
