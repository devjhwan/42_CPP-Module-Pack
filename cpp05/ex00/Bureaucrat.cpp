/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/17 19:15:21 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/17 20:22:47 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

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
	(std::string)this->_name = obj._name;
	this->_grade = obj._grade;
	std::cout << "Copy " << this->_name << std::endl;
	return (*this);
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
	setGrade(this->_grade - 1);
}
void	Bureaucrat::decreaseGrade() {
	setGrade(this->_grade + 1);
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &obj)
{
	out << obj.getName() << ", bureaucrat grade " << obj.getGrade();
	return (out);
}