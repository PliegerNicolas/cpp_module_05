/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:55:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 14:38:26 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

static void	testSignatureAndExecution(const std::string name, const int grade)
{
	std::cout << std::endl;

	std::cout << "\033[32;4m" << name << ", grade = " << grade << " :" << "\033[0m" << std::endl;
	try
	{
		Bureaucrat				bureaucrat(name, grade);
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
	}
	catch (std::exception &exception)
	{
		std::cerr << exception.what() << std::endl;
	}
	std::cout << std::endl;
}

int	main(void)
{
	testSignatureAndExecution("Yoru", 1);
	testSignatureAndExecution("Juliette", 25);
	testSignatureAndExecution("Robert", 50);
	testSignatureAndExecution("Stephane", 100);
	testSignatureAndExecution("Pauline", 150);
	testSignatureAndExecution("Kilimanjaro", 200);

	return (0);
}
