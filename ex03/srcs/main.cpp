/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:55:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 15:18:26 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void	testSignatureAndExecution(Bureaucrat &bureaucrat)
{
	std::cout << std::endl;

	std::cout << "\033[32;4m" << bureaucrat << " :" << "\033[0m" << std::endl;
	PresidentialPardonForm	pform("Paul");
	RobotomyRequestForm		rform("Stephane");
	ShrubberyCreationForm	sform("forest");

	std::cout << "\033[32m" << "Signing forms :" << "\033[0m" << std::endl;
	bureaucrat.signForm(pform);
	bureaucrat.signForm(rform);
	bureaucrat.signForm(sform);

	std::cout << "\033[32m" << "Bureaucrat executing forms :" << "\033[0m" << std::endl;
	bureaucrat.executeForm(pform);
	bureaucrat.executeForm(rform);
	bureaucrat.executeForm(sform);

	std::cout << "\033[32m" << "Forms being executed by bureaucrat :" << "\033[0m" << std::endl;
	pform.execute(bureaucrat);
	rform.execute(bureaucrat);
	sform.execute(bureaucrat);

	std::cout << std::endl;
}

int	main(void)
{
	Bureaucrat	yoru("Yoru", 1);
	Bureaucrat	juliette("Juliette", 10);
	Bureaucrat	robert("Robert", 45);
	Bureaucrat	stephane("Stephane", 72);
	Bureaucrat	pauline("Pauline", 137);
	Bureaucrat	michael("Pauline", 150);

	testSignatureAndExecution(yoru);
	testSignatureAndExecution(juliette);
	testSignatureAndExecution(robert);
	testSignatureAndExecution(stephane);
	testSignatureAndExecution(pauline);
	testSignatureAndExecution(michael);

	return (0);
}
