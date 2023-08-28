/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:08:52 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 10:30:05 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Form.hpp"
#include "Bureaucrat.hpp"

/* Constructors & Destructors */
/* Public */

Form::Form(void): _name("default_name"), _required_grade_to_sign(150),
	_required_grade_to_exec(150), _is_signed(false)
{
	std::cout << "\033[36;2m";
	std::cout << "Form : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

Form::Form(const std::string name, const int required_grade_to_sign,
	const int required_grade_to_exec):
	_name(name),
	_required_grade_to_sign(required_grade_to_sign),
	_required_grade_to_exec(required_grade_to_exec),
	_is_signed(false)
{
	std::cout << "\033[36;2m";
	std::cout << "Form : constructor with name, required_grade_to_sign and requ\
ired_grade_to_exec parameter called";
	std::cout << "\033[0m" << std::endl;

	if (required_grade_to_sign < _max_grade
		|| required_grade_to_exec < _max_grade)
		throw GradeTooHighException("Form");
	else if (required_grade_to_sign > _min_grade
		|| required_grade_to_sign > _min_grade)
		throw GradeTooLowException("Form");
}

Form::Form(const Form &other):
	_name(other._name),
	_required_grade_to_sign(other._required_grade_to_sign),
	_required_grade_to_exec(other._required_grade_to_exec),
	_is_signed(other._is_signed)
{
	std::cout << "\033[36;2m";
	std::cout << "Form : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

Form	&Form::operator=(const Form &other)
{
	std::cout << "\033[36;2m";
	std::cout << "Form : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_is_signed = other._is_signed;
	}
	return (*this);
}

Form::~Form(void)
{
	std::cout << "\033[33;2m";
	std::cout << "Form : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const Form &form)
{
	os << "Name : " << form.getName() << std::endl;
	os << "- Required grade to sign : " << form.getRequiredGradeToSign() << std::endl;
	os << "- Required grade to execute : " << form.getRequiredGradeToExec() << std::endl;
	os << "- Is signed : " << (form.getSignature() ? "true" : "false");
	return (os);
}

/* Member Functions */
/* Public */

void	Form::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _required_grade_to_sign)
		throw GradeTooLowException("Form");
	_is_signed = true;
}

// Getter functions

const std::string	Form::getName(void) const
{
	return (_name);
}

int	Form::getRequiredGradeToSign(void) const
{
	return (_required_grade_to_sign);
}

int	Form::getRequiredGradeToExec(void) const
{
	return (_required_grade_to_exec);
}

bool	Form::getSignature(void) const
{
	return (_is_signed);
}

// Setter functions

/* Private */
