/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:20:42 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 15:14:19 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void):
	AForm("PresidentialPardonForm", 25, 5),
	_target("unknown")
{
	std::cout << "\033[36;2m";
	std::cout << "PresidentialPardonForm : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target):
	AForm("PresidentialPardonForm", 25, 5),
	_target(target)
{
	std::cout << "\033[36;2m";
	std::cout << "PresidentialPardonForm : constructor with name parameter called";
	std::cout << "\033[0m" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &other):
	AForm(other),
	_target(other._target)
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

void	PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	try
	{
		AForm::checkExecute(executor);
		std::cout << "॰ " << _target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	catch (const std::exception &exception)
	{
		std::cerr << "\033[31;2m";
		std::cerr << executor.getName() << " couldn't execute " << getName();
		std::cerr << "\033[0m" << std::endl;
		std::cerr << exception.what() << std::endl;
	}
}

// Getter functions

// Setter functions

/* Private */
