/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 18:20:15 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/30 19:01:38 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

Intern::Intern() {
	std::cout << "Create Intern" << std::endl;
}

Intern::Intern(const Intern &obj) {
	(void) obj;
	std::cout << "Copy Intern" << std::endl;
}

Intern::~Intern() {
	std::cout << "Delete Intern" << std::endl;
}

Intern	&Intern::operator=(const Intern &obj) {
	(void) obj;
	std::cout << "Copy Intern" << std::endl;
	return *this;
}

AForm* createPresidentialPardonForm(std::string s) {
    return new PresidentialPardonForm(s);
}

AForm* createRobotomyRequestForm(std::string s) {
    return new RobotomyRequestForm(s);
}

AForm* createShrubberyCreationForm(std::string s) {
    return new ShrubberyCreationForm(s);
}

AForm	*Intern::makeForm(std::string formName, std::string target) {
	AForm* (*constructors[3])(std::string) = {
        &createPresidentialPardonForm,
        &createRobotomyRequestForm,
        &createShrubberyCreationForm
    };
	std::string formTypes[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	
	for (int i = 0; i < 3; i++) {
		if (formName == formTypes[i]) {
			std::cout << "Intern creates " << formName << " form." << std::endl;
			return constructors[i](target);
		}
	}
	throw FormNameException();
}