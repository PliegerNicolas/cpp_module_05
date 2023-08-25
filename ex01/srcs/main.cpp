/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:55:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/25 15:50:29 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Form.hpp"

/* Test invalidity on constructor invalid */

static void createInvalidBureaucrat(void)
{
	{
		Bureaucrat	paul("Paul", 50);
		std::cout << paul << std::endl;
	}
	{
		Bureaucrat	steve("Steve", 151);
		std::cout << steve << std::endl;
	}
}

static void	createInvalidForm(void)
{
	{
		Form	doc1("Doc1", 10, 20);
		std::cout << doc1 << std::endl;
	}
	{
		Form	doc2("Doc2", 0, 50);
		std::cout << doc2 << std::endl;
	}
}

/* Test signatures of Forms, two ways */

static void	formsAsksForSignatures(void)
{
	{
		Bureaucrat	sebastian("Sebastian", 50);
		Form		form1("Form1", 50, 50);

		std::cout << form1 << std::endl;
		form1.beSigned(sebastian);
		std::cout << form1 << std::endl;
	}
	{
		Bureaucrat	robin("Robin", 60);
		Form		form2("Form2", 50, 50);

		std::cout << form2 << std::endl;
		form2.beSigned(robin);
		std::cout << form2 << std::endl;
	}
}

static void	bureaucratTriesToSignForms(void)
{
	{
		Bureaucrat	sebastian("Sebastian", 50);
		Form		form1("Form1", 50, 50);

		std::cout << form1 << std::endl;
		sebastian.signForm(form1);
		std::cout << form1 << std::endl;
	}
	{
		Bureaucrat	robin("Robin", 60);
		Form		form2("Form2", 50, 50);

		std::cout << form2 << std::endl;
		robin.signForm(form2);
		std::cout << form2 << std::endl;
	}
}

int	main(void)
{
	{
		std::cout << "\033[35mCreate invalid Bureaucrat\033[0m" << std::endl;
		try
		{
			createInvalidBureaucrat();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "\033[35mCreate invalid Form\033[0m" << std::endl;
		try
		{
			createInvalidForm();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "\033[35mForms asks for signatures\033[0m" << std::endl;
		try
		{
			formsAsksForSignatures();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "\033[35mBureaucrat tries to sign Forms\033[0m" << std::endl;
		try
		{
			bureaucratTriesToSignForms();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	return (0);
}
