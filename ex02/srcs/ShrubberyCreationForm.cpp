/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:01:48 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/26 15:25:12 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
	AForm("ShrubberyCreationForm", 145, 137),
	_target_file("unknown")
{
	std::cout << "\033[36;2m";
	std::cout << "ShrubberyCreationForm : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target_file):
	AForm("ShrubberyCreationForm", 145, 137),
	_target_file(target_file)
{
	std::cout << "\033[36;2m";
	std::cout << "ShrubberyCreationForm : constructor with name parameter called";
	std::cout << "\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):
	AForm(other),
	_target_file(other._target_file)
{
	std::cout << "\033[36;2m";
	std::cout << "ShrubberyCreationForm : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &other)
{
	std::cout << "\033[36;2m";
	std::cout << "ShrubberyCreationForm : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	std::cout << "\033[33;2m";
	std::cout << "ShrubberyCreationForm : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member Functions */
/* Public */

// Getter functions

// Setter functions

/* Private */
