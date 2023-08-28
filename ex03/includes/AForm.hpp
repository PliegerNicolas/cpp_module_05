/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nplieger <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/25 13:04:18 by nplieger          #+#    #+#             */
/*   Updated: 2023/08/28 15:03:25 by nplieger         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#pragma once

# include "Exceptions.hpp"

# include <iostream>
# include <string>

class	Bureaucrat;

class	AForm
{
	private:
		/* Attributs */
		const std::string	_name;
		const int			_required_grade_to_sign;
		const int			_required_grade_to_exec;
		bool				_is_signed;
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
		AForm(void);
		AForm(const std::string name, const int required_grade_to_sign,
			const int required_grade_to_exec);

		AForm(const AForm &other);
		AForm	&operator=(const AForm &other);

		virtual ~AForm(void) = 0;

		/* Member functions */

		void				beSigned(const Bureaucrat &bureaucrat);

		void				checkExecute(Bureaucrat const &executor) const;
		virtual void		execute(Bureaucrat const &executor) const = 0;

		// Getters
		const std::string	&getName(void) const;
		const int			&getRequiredGradeToSign(void) const;
		const int			&getRequiredGradeToExec(void) const;
		const bool			&getSignature(void) const;
};

std::ostream	&operator<<(std::ostream &os, const AForm &aform);
