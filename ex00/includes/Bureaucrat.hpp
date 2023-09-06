/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:56:18 by nplieger          #+#    #+#             */
/*   Updated: 2023/09/06 14:48:51 by nicolas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include <iostream>
# include <string>

class	Bureaucrat
{
	private:
		/* Attributs */
		const std::string	_name;
		int					_grade;

		static const int	_max_grade = 1;
		static const int	_min_grade = 150;

		/* Constructors & Destructors */

		/* Member functions */

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		/* Constructors & Destructors */
		Bureaucrat(void);
		Bureaucrat(const std::string &name, int grade);

		Bureaucrat(const Bureaucrat &other);
		Bureaucrat	&operator=(const Bureaucrat &other);

		~Bureaucrat(void);

		/* Member functions */

		void				incrementGrade(void);
		void				decrementGrade(void);

		// Getter functions

		const std::string	getName(void) const;
		int					getGrade(void) const;

		// Setter functions

		void				setGrade(const int grade);

		// Exceptions

		class GradeTooLowException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};

		class GradeTooHighException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

std::ostream	&operator<<(std::ostream &os, const Bureaucrat &bureaucrat);
