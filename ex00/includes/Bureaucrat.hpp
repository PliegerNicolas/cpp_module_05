/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 14:56:18 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/24 16:17:34 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class	Bureaucrat
{
	private:
		/* Attributs */
		const std::string	_name;
		int					_grade;

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

		// Getter functions

		const std::string	getName(void) const;
		int					getGrade(void) const;

		// Setter functions
};

#endif
