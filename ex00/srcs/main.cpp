/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:55:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/24 19:52:16 by nicolas          ###   ########.fr       */
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
	// Scope valid bureaucrates
	{
		try
		{
			createValidBureaucrates();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	// Scope grade too high
	{
		try
		{
			createGradeTooHighBureaucrates();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	// Scope grade too high
	{
		try
		{
			createGradeTooLowBureaucrates();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}


	return (0);
}
