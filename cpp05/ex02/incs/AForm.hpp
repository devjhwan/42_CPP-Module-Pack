/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:08:16 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/18 01:46:23 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm{
	public:
		virtual ~AForm();

		void			beSigned(const Bureaucrat &bureaucrat);
		virtual void	execute(const Bureaucrat &executor) const = 0;

		std::string		getName(void) const;
		bool			isSigned(void) const;
		int				getMinGradeSign(void) const;
		int				getMinGradeExec(void) const;
		
		class GradeTooHighException: public std::exception {
			public:
			const char* what() const throw() {
				return "grade is too high";
			}
		};
		class GradeTooLowException: public std::exception {
			public:
			const char* what() const throw() {
				return "grade is too low";
			}
		};
		class FormNotSignedException: public std::exception {
			public:
			const char* what() const throw() {
				return "form is not signed";
			}
		};
	protected:
		AForm();
		AForm(std::string name, bool _signed, int min_grade_sign, int min_grade_exec);
		AForm(const AForm &obj);
		AForm &operator=(const AForm &obj);
		
		const std::string	_name;
		bool				_signed;
		const int			_min_grade_sign;
		const int			_min_grade_exec;
};

std::ostream	&operator<<(std::ostream &out, const AForm &obj);
#endif