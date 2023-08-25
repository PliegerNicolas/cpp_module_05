/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:55:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/25 14:07:40 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "Form.hpp"

static void	createValidForms(void)
{
	Form	doc1;
	Form	doc2("Doc2", 20, 10);

	std::cout << doc1 << std::endl;
	std::cout << doc2 << std::endl;
}

static void	createInvalidForm(void)
{
	Form	doc1("Doc1", 0, 160);

	std::cout << doc1 << std::endl;
}

static void	bureaucratSignFormTooLowScore(void)
{
	Bureaucrat	richard("Richard", 51);
	Form		doc1("Doc1", 50, 30);

	std::cout << richard << std::endl;
	std::cout << doc1 << std::endl;
	richard.signForm(doc1);
	std::cout << doc1 << std::endl;
}

static void	formSignedByBureaucratTooLowScore(void)
{
	Bureaucrat	paul("Paul", 31);
	Form		doc1("Doc1", 30, 50);

	std::cout << paul << std::endl;
	std::cout << doc1 << std::endl;
	doc1.beSigned(paul);
	std::cout << doc1 << std::endl;

}


int	main(void)
{
	{
		std::cout << "\033[35mCreate valid Forms\033[0m" << std::endl;
		try
		{
			createValidForms();
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
		std::cout << "\033[35mBureaucrat signs form with too low score\033[0m" << std::endl;
		try
		{
			bureaucratSignFormTooLowScore();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "\033[35mForm getting signed by Bureaucrat with too low score\033[0m" << std::endl;
		try
		{
			formSignedByBureaucratTooLowScore();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}
	return (0);
}
