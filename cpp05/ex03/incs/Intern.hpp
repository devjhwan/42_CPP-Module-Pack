/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:18:18 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/30 18:53:33 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "AForm.hpp"
# include <string>

class Intern {
	public:
		Intern();
		Intern(const Intern &obj);
		~Intern();
		Intern &operator=(const Intern &obj);
		AForm	*makeForm(std::string formName, std::string target);

		class FormNameException: public std::exception {
			public:
			const char* what() const throw() {
				return "Unknown form name";
			}
		};
};

#endif