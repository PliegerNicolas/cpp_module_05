/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:56:30 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 11:24:50 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include "Bureaucrat.hpp"
# include "AForm.hpp"
# include <ctime>
# include <cstdlib>

class	RobotomyRequestForm: public AForm
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
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target);

		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);

		virtual ~RobotomyRequestForm(void);

		/* Member functions */

		virtual void		execute(Bureaucrat const &executor) const;
};

