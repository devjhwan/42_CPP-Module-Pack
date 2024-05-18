/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:17:44 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/18 02:09:04 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Bureaucrat.hpp"
#include <string>
#include <iostream>

#define YELLOW "\033[1;33m"
#define RED "\033[1;31m"
#define COLOR_OFF "\033[0m"

int	main(void) {
	AForm *form1 = new ShrubberyCreationForm("Home");
	AForm *form2 = new RobotomyRequestForm("Schrodinger");
	AForm *form3 = new PresidentialPardonForm("Devil Cat");
	{
		Bureaucrat asier("Asier", 140);
		asier.signForm(*form1);
		asier.executeForm(*form1);
		asier.signForm(*form2);
		asier.executeForm(*form2);
		asier.signForm(*form3);
		asier.executeForm(*form3);
	}
	{
		Bureaucrat ruben("Ruben", 100);
		ruben.signForm(*form1);
		ruben.executeForm(*form1);
		ruben.signForm(*form2);
		ruben.executeForm(*form2);
		ruben.signForm(*form3);
		ruben.executeForm(*form3);
	}
	{
		Bureaucrat alba("Alba", 30);
		alba.signForm(*form1);
		alba.executeForm(*form1);
		alba.signForm(*form2);
		alba.executeForm(*form2);
		alba.signForm(*form3);
		alba.executeForm(*form3);
	}
	{
		Bureaucrat sohee("Sohee", 1);
		sohee.signForm(*form1);
		sohee.executeForm(*form1);
		sohee.signForm(*form2);
		sohee.executeForm(*form2);
		sohee.signForm(*form3);
		sohee.executeForm(*form3);
	}
	delete (form1);
	delete (form2);
	delete (form3);
    return 0;
}