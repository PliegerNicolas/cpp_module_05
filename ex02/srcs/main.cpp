/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:55:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 12:12:14 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int	main(void)
{
	{
		std::cout << "\033[35mCreate invalid Bureaucrat\033[0m" << std::endl;
		try
		{
			Bureaucrat				paul("Paul", 50);
			PresidentialPardonForm	pform("Paul");
			RobotomyRequestForm		rform("Stephane");
			ShrubberyCreationForm	sform("tree");

			paul.signForm(pform);
			paul.signForm(rform);
			paul.signForm(sform);
			paul.executeForm(pform);
			paul.executeForm(rform);
			paul.executeForm(sform);
			sform.execute(paul);
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	return (0);
}
