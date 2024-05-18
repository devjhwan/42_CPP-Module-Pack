/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 18:12:51 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/18 01:12:41 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <string>
#include <exception>
#include "Form.hpp"

class Form;

class Bureaucrat {
	public:
		Bureaucrat();
		Bureaucrat(const std::string &name, int grade);
		Bureaucrat(const Bureaucrat& obj);
		virtual ~Bureaucrat();
		Bureaucrat	&operator=(const Bureaucrat &obj);

		void		signForm(Form &form) const;

		std::string	getName() const;
		int			getGrade() const;
		void		increaseGrade();
		void		decreaseGrade();

		class GradeTooHighException: public std::exception {
			public:
			const char* what() const throw() {
				return "Too high grade";
			}
		};
		class GradeTooLowException: public std::exception {
			public:
			const char* what() const throw() {
				return "Too low grade";
			}
		};
	private:
		const std::string	_name;
		int					_grade;

		void	setGrade(int grade);
};

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj);
#endif