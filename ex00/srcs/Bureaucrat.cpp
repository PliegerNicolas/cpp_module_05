/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 15:00:28 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/06 14:49:03 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

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

	if (grade < _max_grade)
		throw GradeTooHighException();
	else if (grade > _min_grade)
		throw GradeTooLowException();
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
	if (_grade - 1 < _max_grade)
		throw GradeTooHighException();
	(_grade)--;
}

void	Bureaucrat::decrementGrade(void)
{
	if (_grade + 1 > _min_grade)
		throw GradeTooLowException();
	(_grade)++;
}

/* Public */

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
	if (grade < _max_grade)
		throw GradeTooHighException();
	else if (grade > _min_grade)
		throw GradeTooLowException();
	_grade = grade;
}

/* Private */

/* Exceptions */

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Bureaucrat::exception : Grade is too low");
}

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Bureaucrat::exception : Grade is too high");
}
