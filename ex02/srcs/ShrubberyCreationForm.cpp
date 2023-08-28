/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:01:48 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 12:08:35 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void):
	AForm("ShrubberyCreationForm", 145, 137),
	_target("unknown")
{
	std::cout << "\033[36;2m";
	std::cout << "ShrubberyCreationForm : Default constructor called";
	std::cout << "\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
	AForm("ShrubberyCreationForm", 145, 137),
	_target(target)
{
	std::cout << "\033[36;2m";
	std::cout << "ShrubberyCreationForm : constructor with name parameter called";
	std::cout << "\033[0m" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &other):
	AForm(other),
	_target(other._target)
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

static void	draw_tree(std::ofstream &outfile)
{
	outfile << "                ,@@@@@@@,							" << std::endl;
	outfile << "        ,,,.   ,@@@@@@/@@,  .oo8888o.				" << std::endl;
	outfile << "     ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o				" << std::endl;
	outfile << "    ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'			" << std::endl;
	outfile << "    %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'			" << std::endl;
	outfile << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'			" << std::endl;
	outfile << "    `&%\\ ` /%&'    |.|        \\ '|8'				" << std::endl;
	outfile << "        |o|        | |         | |					" << std::endl;
	outfile << "        |.|        | |         | |					" << std::endl;
	outfile << " jgs \\\\/ ._\\//_/__/  ,\\_//__\\\\/.  \\_//__/_	" << std::endl;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor) const
{
	std::string		filename;
	std::ofstream	outfile;

	if (getSignature() == false)
		throw UnsignedFormException("ShrubberyCreationForm");
	else if (executor.getGrade() > getRequiredGradeToExec())
		throw UnauthorizedFormExecutionException("ShrubberyCreationForm");

	(void)executor;
	filename = _target + "_shrubbery";
	try
	{
		outfile.open(filename.c_str());
		draw_tree(outfile);
		outfile.close();
		std::cout << filename << " created" << std::endl;
	}
	catch (const std::ofstream::failure &exception)
	{
		std::cerr << "Error: " << exception.what() << std::endl;
	}
}

// Getter functions

// Setter functions

/* Private */
