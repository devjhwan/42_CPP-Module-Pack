/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junghwle <junghwle@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/18 00:57:43 by junghwle          #+#    #+#             */
/*   Updated: 2024/05/18 01:06:48 by junghwle         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

#define YELLOW "\033[1;33m"
#define COLOR_OFF "\033[0m"

PresidentialPardonForm::PresidentialPardonForm():
	AForm("PresidentialPardonForm", false, 25, 5),
	_target("Eden") {
	std::cout << "Create PresidentialPardonForm with " << this->getTarget() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target):
	AForm("PresidentialPardonForm", false, 25, 5),
	_target(target) {
	std::cout << "Create PresidentialPardonForm with " << this->getTarget() << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &obj): AForm(obj),
	_target(obj.getTarget()) {
	std::cout << "Copy PresidentialPardonForm with " << this->getTarget() << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
	std::cout << "Delete PresidentialPardonForm" << std::endl;
}

PresidentialPardonForm	&PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
	if (this != &obj) {
		(std::string)this->_name = obj.getName();
		(std::string)this->_target = obj.getTarget();
		this->_signed = obj.isSigned();
		*(int *)(&this->_min_grade_sign) = obj.getMinGradeSign();
		*(int *)(&this->_min_grade_exec) = obj.getMinGradeExec();
		std::cout << "Copy PresidentialPardonForm " << std::endl;
	}
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &executor) const {
	if (!this->isSigned())
		throw PresidentialPardonForm::FormNotSignedException();
	else if (executor.getGrade() > this->getMinGradeExec())
		throw PresidentialPardonForm::GradeTooLowException();
	else {
		std::cout << YELLOW;
		std::cout << "In a bustling galactic courtroom, the atmosphere is tense as " << this->getTarget() << " stands accused of a crime they didn't commit.\n";
        std::cout << "The evidence against them seems overwhelming, and the judges appear ready to deliver a verdict.\n";
        std::cout << "Suddenly, the courtroom doors burst open, and in strides Zaphod Beeblebrox, the flamboyant and unpredictable President of the Galaxy.\n\n";
        std::cout << "With a nonchalant wave of his hand, Zaphod announces that he's decided to exercise his presidential pardon authority.\n";
        std::cout << "\"Sorry for the inconvenience, folks,\" he quips, flashing his trademark grin.\n";
        std::cout << "The judges, stunned by his sudden appearance and authority, have no choice but to acquiesce.\n\n";
        std::cout << "Amidst the cheers and relief from " << this->getTarget() << " and their supporters, Zaphod casually explains,\n";
        std::cout << "\"Just doing my part to keep the universe interesting.\"\n";
        std::cout << "And with that, he saunters out of the courtroom, leaving behind a trail of bewildered onlookers and a grateful " << this->getTarget();
		std::cout << ", now free to continue their adventures across the cosmos.\n";
		std::cout << COLOR_OFF;
	}
}

std::string	PresidentialPardonForm::getTarget(void) const {
	return this->_target;
}

std::ostream	&operator<<(std::ostream &out, const PresidentialPardonForm &obj) {
	out << "                Name: " << obj.getName() << std::endl;
	out << "              Target: " << obj.getTarget() << std::endl;
	out << "           Is signed: " << (obj.isSigned() ? "true" : "false") << std::endl;
	out << "   Min Grade to sign: " << obj.getMinGradeSign() << std::endl;
	out << "Min Grade to execute: " << obj.getMinGradeExec() << std::endl;
	return (out);
}
