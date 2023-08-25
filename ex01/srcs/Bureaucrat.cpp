/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:00:28 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/25 15:27:38 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Form.hpp"

/* Constructors & Destructors */

/* Public */

Bureaucrat::Bureaucrat(void): _name("default_name"), _grade(150)
{
	std::cout << "\033[36;2m";
	std::cout << "Bureaucrat : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name)
{
	std::cout << "\033[36;2m";
	std::cout << "Bureaucrat : constructor with name parameter and grade parameter called";
	std::cout << "\033[0m" << std::endl;

	if (grade < 1)
		throw GradeTooHighException("Bureaucrat");
	else if (grade > 150)
		throw GradeTooLowException("Bureaucrat");
	_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &other): _name(other._name), _grade(other._grade)
{
	std::cout << "\033[36;2m";
	std::cout << "Bureaucrat : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &other)
{
	std::cout << "\033[36;2m";
	std::cout << "Bureaucrat : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_grade = other._grade;
	}
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "\033[33;2m";
	std::cout << "Bureaucrat : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat)
{
	os << bureaucrat.getName() << ", grade " << bureaucrat.getGrade();
	return (os);
}

/* Member Functions */

void	Bureaucrat::incrementGrade(void)
{
	if (_grade - 1 < 1)
		throw GradeTooHighException("Bureaucrat");
	(_grade)--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > 150)
		throw GradeTooLowException("Bureaucrat");
	(_grade)++;
}

/* Public */

void	Bureaucrat::signForm(Form &form) const
{
	try
	{
		form.beSigned(*this);
		std::cout << "\033[36;2m";
		std::cout << _name << " successfully signed " << form.getName();
		std::cout << "\033[0m" << std::endl;
	}
	catch (const std::exception &exception)
	{
		std::cout << "\033[31;2m";
		std::cout << _name << " couldn't sign " << form.getName();
		std::cout << " due too => " << exception.what();
		std::cout << "\033[0m" << std::endl;
	}
}

// Getter functions

const std::string	Bureaucrat::getName(void) const
{
	return (_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (_grade);
}

// Setter functions

void	Bureaucrat::setGrade(const int grade)
{
	if (grade < 1)
		throw GradeTooHighException("Bureaucrat");
	else if (grade > 150)
		throw GradeTooLowException("Bureaucrat");
	_grade = grade;
}

/* Private */
