/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:57:43 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/18 01:06:48 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm():
	AForm("RobotomyRequestForm", false, 72, 45),
	_target("Eden") {
	srand(time(0));
	std::cout << "Create RobotomyRequestForm with " << this->getTarget() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target):
	AForm("RobotomyRequestForm", false, 72, 45),
	_target(target) {
	srand(time(0));
	std::cout << "Create RobotomyRequestForm with " << this->getTarget() << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &obj): AForm(obj),
	_target(obj.getTarget()) {
	srand(time(0));
	std::cout << "Copy RobotomyRequestForm with " << this->getTarget() << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
	std::cout << "Delete RobotomyRequestForm" << std::endl;
}

RobotomyRequestForm	&RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
	if (this != &obj) {
		(std::string)this->_name = obj.getName();
		(std::string)this->_target = obj.getTarget();
		this->_signed = obj.isSigned();
		*(int *)(&this->_min_grade_sign) = obj.getMinGradeSign();
		*(int *)(&this->_min_grade_exec) = obj.getMinGradeExec();
		std::cout << "Copy RobotomyRequestForm " << std::endl;
	}
	return (*this);
}

void	RobotomyRequestForm::execute(const Bureaucrat &executor) const {
	if (!this->isSigned())
		throw RobotomyRequestForm::FormNotSignedException();
	else if (executor.getGrade() > this->getMinGradeExec())
		throw RobotomyRequestForm::GradeTooLowException();
	else {
		int	dice;
        std::cout << "BRRRRRRRRRRR!" << std::endl;
        std::cout << "BZZZZZZZZZZZZZZZZ!" << std::endl;
        std::cout << "DRRRRRRRRRRRRRRRRRRRRR!" << std::endl;
        std::cout << "VRRRRRRRRRRRRRRRRRRRRR!" << std::endl;
		std::cout << "(Pequeño descanso con café mientras tira el dado)" << std::endl;
		dice = rand() % 6 + 1;
        std::cout << "KRRRRRRRRRRRRRRRRRRRR!" << std::endl;
        std::cout << "VRRRRRRRRRRRRRRRRRRRRR!" << std::endl;
        std::cout << "DRRRRRRRRRRRRRRRRRRRRR!" << std::endl;
		if (dice <= 3) {
			std::cout << "[FAILURE] ";
			std::cout << this->getTarget() << " has failed to be robotomized" << std::endl;
		}
		else {
			std::cout << "[SUCCESS] ";
			std::cout << this->getTarget() << " has been robotomized succesfully" << std::endl;
		}
	}
}

std::string	RobotomyRequestForm::getTarget(void) const {
	return this->_target;
}

std::ostream	&operator<<(std::ostream &out, const RobotomyRequestForm &obj) {
	out << "                Name: " << obj.getName() << std::endl;
	out << "              Target: " << obj.getTarget() << std::endl;
	out << "           Is signed: " << (obj.isSigned() ? "true" : "false") << std::endl;
	out << "   Min Grade to sign: " << obj.getMinGradeSign() << std::endl;
	out << "Min Grade to execute: " << obj.getMinGradeExec() << std::endl;
	return (out);
}
