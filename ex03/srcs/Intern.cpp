/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 15:24:44 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 16:47:45 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Intern.hpp"

/* Constructors & Destructors */
/* Public */

Intern::Intern(void)
{
	std::cout << "\033[36;2m";
	std::cout << "Intern : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Intern::Intern(const Intern &other)
{
	std::cout << "\033[36;2m";
	std::cout << "Intern : Copy constructor called";
	std::cout << "\033[0m" << std::endl;

	(void)other;
}

Intern	&Intern::operator=(const Intern &other)
{
	std::cout << "\033[36;2m";
	std::cout << "Intern : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		(void)other;
	}
	return (*this);
}

Intern::~Intern(void)
{
	std::cout << "\033[33;2m";
	std::cout << "Intern : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member Functions */
/* Public */
struct	FormTypeInfo
{
	const std::string	name;
	AForm	*(*constructor)(const std::string &);
};

static AForm	*createShrubberyForm(const std::string &target)
{
	return (new ShrubberyCreationForm(target));
}

static AForm	*createRobotomyRequestForm(const std::string &target)
{
	return (new RobotomyRequestForm(target));
}

static AForm	*createPresidentialPardonForm(const std::string &target)
{
	return (new PresidentialPardonForm(target));
}

AForm	*Intern::makeForm(const std::string form_name,
	const std::string form_target) const
{
	const FormTypeInfo formTypes[] = {
		{"shrubbery creation", &createShrubberyForm},
		{"robotomy request", &createRobotomyRequestForm},
		{"presidential pardon", &createPresidentialPardonForm}
	};

	for (const FormTypeInfo &formType : formTypes)
	{
		if (form_name == formType.name)
			return (formType.constructor(form_target));
	}

	std::cerr << "\033[31m" << "Error: given form_name doesn't exist";
	std::cerr << "\033[0m" << std::endl;

	return (nullptr);
}

// Getter functions

// Setter functions

/* Private */
