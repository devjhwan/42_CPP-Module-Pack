/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 20:08:16 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/18 01:26:23 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

#include <string>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form{
	public:
		Form();
		Form(std::string name, bool _signed, int min_grade_sign, int min_grade_exec);
		Form(const Form &obj);
		~Form();
		Form &operator=(const Form &obj);

		void	beSigned(const Bureaucrat &bureaucrat);

		std::string	getName(void) const;
		bool		isSigned(void) const;
		int			getMinGradeSign(void) const;
		int			getMinGradeExec(void) const;
		
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
	private:
		const std::string	_name;
		bool				_signed;
		const int			_min_grade_sign;
		const int			_min_grade_exec;
};

std::ostream	&operator<<(std::ostream &out, const Form &obj);
#endif