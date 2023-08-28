/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:08:52 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 14:46:30 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "AForm.hpp"
#include "Bureaucrat.hpp"

/* Constructors & Destructors */
/* Public */

AForm::AForm(void): _name("default_name"), _required_grade_to_sign(150),
	_required_grade_to_exec(150), _is_signed(false)
{
	std::cout << "\033[36;2m";
	std::cout << "AForm : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

AForm::AForm(const std::string name, const int required_grade_to_sign,
	const int required_grade_to_exec):
	_name(name),
	_required_grade_to_sign(required_grade_to_sign),
	_required_grade_to_exec(required_grade_to_exec),
	_is_signed(false)
{
	std::cout << "\033[36;2m";
	std::cout << "AForm : constructor with name, required_grade_to_sign and requ\
ired_grade_to_exec parameter called";
	std::cout << "\033[0m" << std::endl;

	if (required_grade_to_sign < _max_grade
		|| required_grade_to_exec < _max_grade)
		throw GradeTooHighException("AForm");
	else if (required_grade_to_sign > _min_grade
		|| required_grade_to_sign > _min_grade)
		throw GradeTooLowException("AForm");
}

AForm::AForm(const AForm &other):
	_name(other._name),
	_required_grade_to_sign(other._required_grade_to_sign),
	_required_grade_to_exec(other._required_grade_to_exec),
	_is_signed(other._is_signed)
{
	std::cout << "\033[36;2m";
	std::cout << "AForm : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

AForm	&AForm::operator=(const AForm &other)
{
	std::cout << "\033[36;2m";
	std::cout << "AForm : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		_is_signed = other._is_signed;
	}
	return (*this);
}

AForm::~AForm(void)
{
	std::cout << "\033[33;2m";
	std::cout << "AForm : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

std::ostream	&operator<<(std::ostream &os, const AForm &aform)
{
	os << "Name : " << aform.getName() << std::endl;
	os << "- Required grade to sign : " << aform.getRequiredGradeToSign() << std::endl;
	os << "- Required grade to execute : " << aform.getRequiredGradeToExec() << std::endl;
	os << "- Is signed : " << (aform.getSignature() ? "true" : "false");
	return (os);
}

/* Member Functions */
/* Public */

void	AForm::beSigned(const Bureaucrat &bureaucrat)
{
	if (bureaucrat.getGrade() > _required_grade_to_sign)
		throw GradeTooLowException("AForm");
	_is_signed = true;
}

void	AForm::checkExecute(const Bureaucrat &executor) const
{
	if (getSignature() == false)
		throw UnsignedFormException(getName().c_str());
	else if (executor.getGrade() > getRequiredGradeToExec())
		throw UnauthorizedFormExecutionException(getName().c_str());
}

// Getter functions

const std::string	&AForm::getName(void) const
{
	return (_name);
}

const int	&AForm::getRequiredGradeToSign(void) const
{
	return (_required_grade_to_sign);
}

const int	&AForm::getRequiredGradeToExec(void) const
{
	return (_required_grade_to_exec);
}

const bool	&AForm::getSignature(void) const
{
	return (_is_signed);
}

// Setter functions

/* Private */
