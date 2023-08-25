/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:55:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/25 12:58:46 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"

static void	createValidBureaucrates(void)
{
	Bureaucrat	richard;
	Bureaucrat	paul("Paul", 3);
	Bureaucrat	stephane("Paul", 95);

	std::cout << richard << std::endl;
	std::cout << paul << std::endl;
	std::cout << stephane << std::endl;
}

static void	setWrongGradeBureaucratesAfterCreation(void)
{
	Bureaucrat	richard;
	Bureaucrat	paul("Paul", 3);
	Bureaucrat	stephane("Paul", 95);

	std::cout << richard << std::endl;
	paul.setGrade(160);
	std::cout << paul << std::endl;
	std::cout << stephane << std::endl;
}

static void	wrongGradeIncrementBureaucrates(void)
{
	Bureaucrat	paul("Paul", 3);

	paul.incrementGrade();
	std::cout << paul << std::endl;
	paul.incrementGrade();
	std::cout << paul << std::endl;
	paul.incrementGrade();
	std::cout << paul << std::endl;
}

static void	createGradeTooHighBureaucrates(void)
{
	Bureaucrat	richard;
	Bureaucrat	paul("Paul", 0);
	Bureaucrat	stephane("Paul", 151);

	std::cout << richard << std::endl;
	std::cout << paul << std::endl;
	std::cout << stephane << std::endl;
}

static void	createGradeTooLowBureaucrates(void)
{
	Bureaucrat	richard;
	Bureaucrat	paul("Paul", 151);
	Bureaucrat	stephane("Paul", 0);

	std::cout << richard << std::endl;
	std::cout << paul << std::endl;
	std::cout << stephane << std::endl;
}


int	main(void)
{
	{
		std::cout << "\033[35mCreate valid bureaucrats\033[0m" << std::endl;
		try
		{
			createValidBureaucrates();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "\033[35mSet wrong grade\033[0m" << std::endl;
		try
		{
			setWrongGradeBureaucratesAfterCreation();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "\033[35mGrade too high on creation\033[0m" << std::endl;
		try
		{
			createGradeTooHighBureaucrates();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "\033[35mGrade too low on creation\033[0m" << std::endl;
		try
		{
			createGradeTooLowBureaucrates();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	std::cout << std::endl;

	{
		std::cout << "\033[35mWrong grade increment\033[0m" << std::endl;
		try
		{
			wrongGradeIncrementBureaucrates();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	return (0);
}
