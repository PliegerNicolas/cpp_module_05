/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:57:50 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/26 15:21:43 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include "AForm.hpp"

class	PresidentialPardonForm: public AForm
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
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string target_file);

		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);

		virtual ~PresidentialPardonForm(void);

		/* Member functions */
};

