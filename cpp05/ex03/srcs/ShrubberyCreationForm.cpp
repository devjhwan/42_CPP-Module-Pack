/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:57:43 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/30 18:47:46 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():
	AForm("ShrubberyCreationForm", false, 145, 137),
	_target("Eden") {
	std::cout << "Create ShrubberyCreationForm with " << this->getTarget() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target):
	AForm("ShrubberyCreationForm", false, 145, 137),
	_target(target) {
	std::cout << "Create ShrubberyCreationForm with " << this->getTarget() << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): AForm(obj),
	_target(obj.getTarget()) {
	std::cout << "Copy ShrubberyCreationForm with " << this->getTarget() << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << "Delete ShrubberyCreationForm" << std::endl;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
	if (this != &obj) {
		(std::string)this->_name = obj.getName();
		(std::string)this->_target = obj.getTarget();
		this->_signed = obj.isSigned();
		*(int *)(&this->_min_grade_sign) = obj.getMinGradeSign();
		*(int *)(&this->_min_grade_exec) = obj.getMinGradeExec();
		std::cout << "Copy ShrubberyCreationForm " << std::endl;
	}
	return (*this);
}

void	ShrubberyCreationForm::execute(const Bureaucrat &executor) const {
	if (!this->isSigned())
		throw ShrubberyCreationForm::FormNotSignedException();
	else if (executor.getGrade() > this->getMinGradeExec())
		throw ShrubberyCreationForm::GradeTooLowException();
	else {
		std::ofstream outfile(this->getTarget().c_str());
		outfile << "                     v .   ._, |_  ., " << std::endl;
		outfile << "           `-._\\/  .  \\ /    |/_ " << std::endl;
		outfile << "               \\\\  _\\, y | \\// " << std::endl;
		outfile << "         _\\_.___\\\\, \\\\/ -.\\|| " << std::endl;
		outfile << "           `7-,--.`._||  / / , " << std::endl;
		outfile << "           /'     `-. `./ / |/_.'   " << std::endl;
		outfile << "                     |    |// " << std::endl;
		outfile << "                     |_    / " << std::endl;
		outfile << "                     |-   | " << std::endl;
		outfile << "                     |   =| " << std::endl;
		outfile << "                     |    | " << std::endl;
		outfile << "--------------------/ ,  . \\--------._ " << std::endl;
		outfile.close();
		std::cout << "Tree has been planted succesfully to " << this->getTarget() << std::endl;
	}
}

std::string	ShrubberyCreationForm::getTarget(void) const {
	return this->_target;
}

std::ostream	&operator<<(std::ostream &out, const ShrubberyCreationForm &obj) {
	out << "                Name: " << obj.getName() << std::endl;
	out << "              Target: " << obj.getTarget() << std::endl;
	out << "           Is signed: " << (obj.isSigned() ? "true" : "false") << std::endl;
	out << "   Min Grade to sign: " << obj.getMinGradeSign() << std::endl;
	out << "Min Grade to execute: " << obj.getMinGradeExec() << std::endl;
	return (out);
}
