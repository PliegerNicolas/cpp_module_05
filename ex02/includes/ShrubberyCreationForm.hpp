/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:55:22 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/26 15:01:41 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include "AForm.hpp"

class	ShrubberyCreationForm : public AForm
{
	private:
		/* Attributs */
		const std::string	_target_file;

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
		ShrubberyCreationForm(const std::string target_file);

		ShrubberyCreationForm(const ShrubberyCreationForm &other);
		ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &other);

		virtual ~ShrubberyCreationForm(void);

		/* Member functions */
};
