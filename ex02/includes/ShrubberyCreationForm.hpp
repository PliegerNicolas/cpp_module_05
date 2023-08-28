/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:55:22 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 11:36:07 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include <fstream>

class	ShrubberyCreationForm : public AForm
{
	private:
		/* Attributs */
		const std::string	_target;

		/* Constructors & Destructors */

		/* Member functions */

	protected:
		/* Attributs */

		/* Constructors & Destructors */

		/* Member functions */

	public:
		/* Attributs */

		/* Constructors & Destructors */
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const std::string target);

		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

		virtual ~ShrubberyCreationForm(void);

		/* Member functions */

		virtual void		execute(Bureaucrat const &executor) const;
};
