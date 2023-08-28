/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:55:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 16:34:46 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int	main(void)
{
	Bureaucrat	meuseulbi("Meuseulbi", 30);
	Intern		intern;
	AForm		*forms[4];

	std::cout << std::endl;
	std::cout << "Let the intern create the Shrubbery Creation form" << std::endl;
	forms[0] = intern.makeForm("shrubbery creation", "Target1");
	std::cout << std::endl;
	std::cout << "Let the intern create the Robotomy Request form" << std::endl;
	forms[1] = intern.makeForm("robotomy request", "Target2");
	std::cout << std::endl;
	std::cout << "Let the intern create the Presidential Pardon form" << std::endl;
	forms[2] = intern.makeForm("presidential pardon", "Target3");
	std::cout << std::endl;
	std::cout << "Let the intern create the other form" << std::endl;
	forms[3] = intern.makeForm("other", "Target4");
	std::cout << std::endl;


	for (size_t i = 0; i < 4; i++)
	{
		if (forms[i])
		{
			std::cout << *(forms[i]) << std::endl;
			meuseulbi.signForm(*(forms[i]));
			meuseulbi.executeForm(*(forms[i]));
			delete forms[i];
			std::cout << std::endl;
		}
	}
	return (0);
}
