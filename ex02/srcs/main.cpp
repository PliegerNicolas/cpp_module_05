/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:55:37 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/25 16:13:28 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "Bureaucrat.hpp"
#include "AForm.hpp"

int	main(void)
{
	{
		std::cout << "\033[35mCreate invalid Bureaucrat\033[0m" << std::endl;
		try
		{
			//createInvalidBureaucrat();
		}
		catch (std::exception &exception)
		{
			std::cerr << exception.what() << std::endl;
		}
	}

	return (0);
}
