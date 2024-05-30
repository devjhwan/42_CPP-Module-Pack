/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:15:21 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/18 02:03:16 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include <iostream>
#include <exception>

#define RED "\033[1;31m"
#define GREEN "\033[1;32m"
#define COLOR_OFF "\033[0m"

Bureaucrat::Bureaucrat(): _name("Default") {
	setGrade(1);
	std::cout << "Create " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(const std::string &name, int grade): _name(name) {
	setGrade(grade);
	std::cout << "Create " << this->_name << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj): 
	_name(obj._name), _grade(obj._grade) {
	std::cout << "Copy " << this->_name << std::endl;
}
Bureaucrat::~Bureaucrat() {
	std::cout << "Delete " << this->_name << std::endl;
}
Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &obj) {
	if (this != &obj) {
		(std::string)this->_name = obj._name;
		this->_grade = obj._grade;
		std::cout << "Copy " << this->_name << std::endl;
	}
	return (*this);
}

void	Bureaucrat::signForm(AForm &form) const {
	try {
		form.beSigned(*this);
		std::cerr << GREEN;
		std::cout << this->getName() << " signed " << form.getName() << std::endl;
		std::cerr << COLOR_OFF;
	} catch (const std::exception &e) {
		std::cerr << RED;
		std::cerr << this->getName() << " couldn't sign " << form.getName();
		std::cerr << " because " << e.what() << std::endl;
		std::cerr << COLOR_OFF;
	}
}

void		Bureaucrat::executeForm(const AForm &form) {
	try {
		form.execute(*this);
		std::cerr << GREEN;
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
		std::cerr << COLOR_OFF;
	} catch (const std::exception &e) {
		std::cerr << RED;
		std::cerr << this->getName() << " couldn't execute " << form.getName();
		std::cerr << " because " << e.what() << std::endl;
		std::cerr << COLOR_OFF;
	}
}

std::string	Bureaucrat::getName() const {
	return this->_name;
}
int	Bureaucrat::getGrade() const {
	return this->_grade;
}
void	Bureaucrat::setGrade(int grade) {
	if (grade < 1)
		throw GradeTooHighException();
	if (grade > 150)
		throw GradeTooLowException();
	this->_grade = grade;
}
void	Bureaucrat::increaseGrade() {
	std::cout << "Increase grade to " << this->_grade - 1 << std::endl;
	setGrade(this->_grade - 1);
}
void	Bureaucrat::decreaseGrade() {
	std::cout << "Decrease grade to " << this->_grade + 1 << std::endl;
	setGrade(this->_grade + 1);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}