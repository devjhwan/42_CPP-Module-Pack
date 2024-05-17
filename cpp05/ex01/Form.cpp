#include "Form.hpp"
#include <iostream>

Form::Form(): _name("Default Form"), _signed(false), _min_grade_sign(20), _min_grade_exec(10) {
	std::cout << "Create Form " << std::endl;
}

Form::Form(std::string name, bool _signed, int min_grade_sign, int min_grade_exec):
		_name(name), _signed(_signed),
		_min_grade_sign(min_grade_sign), _min_grade_exec(min_grade_exec) {
	if (this->getMinGradeSign() < 1 || this->getMinGradeExec() < 1)
		throw Form::GradeTooHighException();
	else if (this->getMinGradeSign() > 150 || this->getMinGradeExec() > 150)
		throw Form::GradeTooLowException();
	std::cout << "Create Form " << std::endl;
}

Form::Form(const Form &obj):
	_signed(obj._signed),
	_min_grade_sign(obj._min_grade_sign),
	_min_grade_exec(obj._min_grade_exec) {
	std::cout << "Copy Form " << std::endl;
}

Form::~Form() {
	std::cout << "Delete Form " << std::endl;
}

Form	&Form::operator=(const Form &obj) {
	(std::string)this->_name = obj.getName();
	this->_signed = obj.isSigned();
	*(int *)(&this->_min_grade_sign) = obj.getMinGradeSign();
	*(int *)(&this->_min_grade_exec) = obj.getMinGradeExec();
	std::cout << "Copy Form " << std::endl;
	return (*this);
}

void	Form::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.signForm(*this))
		this->_signed = true;
	else
		throw Form::GradeTooLowException();
}

// std::cout << bureaucrat.getName() << " signed " << this->getName() << std::endl; else {
// 		std::cout << bureaucrat.getName() << " couldn’t sign " << this->getName();
// 		std::cout << " because grade is too low" << std::endl;
// 	}

std::string	Form::getName() const {
	return this->_name;
}

bool	Form::isSigned(void) const {
	return this->_signed;
}

int	Form::getMinGradeSign(void) const {
	return this->_min_grade_sign;
}
int	Form::getMinGradeExec(void) const {
	return this->_min_grade_exec;
}

std::ostream	&operator<<(std::ostream &out, const Form &obj) {
	out << "                Name: " << obj.getName() << std::endl;
	out << "           Is signed: " << (obj.isSigned() ? "true" : "false") << std::endl;
	out << "   Min Grade to sign: " << obj.getMinGradeSign() << std::endl;
	out << "Min Grade to execute: " << obj.getMinGradeExec() << std::endl;
	return out;
}