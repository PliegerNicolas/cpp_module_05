/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:57:50 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 11:04:05 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include "Bureaucrat.hpp"
# include "AForm.hpp"

class	PresidentialPardonForm: public AForm
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
		PresidentialPardonForm(void);
		PresidentialPardonForm(const std::string target);

		PresidentialPardonForm(const PresidentialPardonForm &other);
		PresidentialPardonForm	&operator=(const PresidentialPardonForm &other);

		virtual ~PresidentialPardonForm(void);

		/* Member functions */

		virtual void		execute(Bureaucrat const &executor) const;
};

