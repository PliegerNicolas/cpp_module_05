/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 14:56:30 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/26 15:20:01 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include "AForm.hpp"

class	RobotomyRequestForm: public AForm
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
		RobotomyRequestForm(void);
		RobotomyRequestForm(const std::string target_file);

		RobotomyRequestForm(const RobotomyRequestForm &other);
		RobotomyRequestForm	&operator=(const RobotomyRequestForm &other);

		virtual ~RobotomyRequestForm(void);

		/* Member functions */
};

