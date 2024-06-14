/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:17:44 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/30 19:25:20 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "AForm.hpp"
#include <iostream>

#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define COLOR_OFF "\033[0m"

int	main(void) {
	Intern	intern;
	{
		AForm	*form;

		try {
			std::cout << YELLOW << "Try 1, Intern Tries to create all forms correctly" << COLOR_OFF << std::endl;
			form = intern.makeForm("robotomy request", "robot");
			std::cout << *form << std::endl;
			delete (form);
			form = intern.makeForm("presidential pardon", "David");
			std::cout << *form << std::endl;
			delete (form);
			form = intern.makeForm("shrubbery creation", "Nerd");
			std::cout << *form << std::endl;
			delete (form);
		} catch (const std::exception &e) {
			std::cerr << RED;
			std::cerr << e.what() << std::endl;
			std::cerr << COLOR_OFF;
		}
		std::cout << std::endl;
		try {
			std::cout << YELLOW << "Try 2, Intern tries to create incorrect form" << COLOR_OFF << std::endl;
			form = intern.makeForm("random request", "Unknown");
			std::cout << *form << std::endl;
			delete (form);
		} catch (const std::exception &e) {
			std::cerr << RED;
			std::cerr << e.what() << std::endl;
			std::cerr << COLOR_OFF;
		}
		std::cout << std::endl;
		try {
			std::cout << YELLOW << "Try 3, Some Bureaucrat tries to execute the created form" << COLOR_OFF << std::endl;
			Bureaucrat irene("Irene", 25);
			form = intern.makeForm("shrubbery creation", "Happy");
			std::cout << *form << std::endl;
			irene.signForm(*form);
			irene.executeForm(*form);
			delete (form);
		} catch (const std::exception &e) {
			std::cerr << RED;
			std::cerr << e.what() << std::endl;
			std::cerr << COLOR_OFF;
		}
		std::cout << std::endl;
		try {
			std::cout << YELLOW << "Try 4, Some Bureaucrat tries to execute the created form" << COLOR_OFF << std::endl;
			Bureaucrat mar("Mar", 150);
			form = intern.makeForm("shrubbery creation", "Happy");
			std::cout << *form << std::endl;
			mar.signForm(*form);
			mar.executeForm(*form);
			delete (form);
		} catch (const std::exception &e) {
			std::cerr << RED;
			std::cerr << e.what() << std::endl;
			std::cerr << COLOR_OFF;
		}
		std::cout << std::endl;
	}
    return 0;
}