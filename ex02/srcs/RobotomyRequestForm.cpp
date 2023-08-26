/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:18:04 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/26 15:24:53 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):
	AForm("RobotomyRequestForm", 72, 45),
	_target_file("unknown")
{
	std::cout << "\033[36;2m";
	std::cout << "RobotomyRequestForm : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target_file):
	AForm("DefaultRobotomyRequest form", 72, 45),
	_target_file(target_file)
{
	std::cout << "\033[36;2m";
	std::cout << "RobotomyRequestForm : constructor with name parameter called";
	std::cout << "\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
	AForm(other),
	_target_file(other._target_file)
{
	std::cout << "\033[36;2m";
	std::cout << "RobotomyRequestForm : Copy constructor called";
	std::cout << "\033[0m" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &other)
{
	std::cout << "\033[36;2m";
	std::cout << "RobotomyRequestForm : Assignment operator called";
	std::cout << "\033[0m" << std::endl;

	if (this != &other)
	{
		AForm::operator=(other);
	}
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
	std::cout << "\033[33;2m";
	std::cout << "RobotomyRequestForm : Default destructor called";
	std::cout << "\033[0m" << std::endl;
}

/* Member Functions */
/* Public */

// Getter functions

// Setter functions

/* Private */
