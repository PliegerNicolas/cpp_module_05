/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:20:42 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/26 15:24:37 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
	AForm("PresidentialPardonForm", 25, 5),
	_target_file("unknown")
{
	std::cout << "\033[36;2m";
	std::cout << "PresidentialPardonForm : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target_file):
	AForm("DefaultFresidentialPardon form", 25, 5),
	_target_file(target_file)
{
	std::cout << "\033[36;2m";
	std::cout << "PresidentialPardonForm : constructor with name parameter called";
	std::cout << "\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):
	AForm(other),
	_target_file(other._target_file)
{
	std::cout << "\033[36;2m";
	std::cout << "PresidentialPardonForm : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	std::cout << "\033[36;2m";
	std::cout << "PresidentialPardonForm : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{
	std::cout << "\033[33;2m";
	std::cout << "PresidentialPardonForm : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member Functions */
/* Public */

// Getter functions

// Setter functions

/* Private */
