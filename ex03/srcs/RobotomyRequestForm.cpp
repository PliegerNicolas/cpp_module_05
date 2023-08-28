/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:18:04 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 15:14:28 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void):
	AForm("RobotomyRequestForm", 72, 45),
	_target("unknown")
{
	std::cout << "\033[36;2m";
	std::cout << "RobotomyRequestForm : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):
	AForm("RobotomyRequestForm", 72, 45),
	_target(target)
{
	std::cout << "\033[36;2m";
	std::cout << "RobotomyRequestForm : constructor with name parameter called";
	std::cout << "\033[0m" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &other):
	AForm(other),
	_target(other._target)
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

void	RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	try
	{
		AForm::checkExecute(executor);
		std::cout << "॰ Brrzmmmm ... Brrrkrrmmmzzzz ... Vrmmkrmmbmm" << std::endl;
		std::cout << _target << "'s robotomy has ";
		std::srand(std::time(0));
		std::cout << (std::rand() % 2 ? "succeeded" : "failed") << std::endl;
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
