#include "AForm.hpp"
#include <iostream>

AForm::AForm(): _name("Default Form"), _signed(false), _min_grade_sign(20), _min_grade_exec(10) {
	std::cout << "Create Form " << std::endl;
}

AForm::AForm(std::string name, bool _signed, int min_grade_sign, int min_grade_exec):
		_name(name), _signed(_signed),
		_min_grade_sign(min_grade_sign), _min_grade_exec(min_grade_exec) {
	if (this->getMinGradeSign() < 1 || this->getMinGradeExec() < 1)
		throw AForm::GradeTooHighException();
	else if (this->getMinGradeSign() > 150 || this->getMinGradeExec() > 150)
		throw AForm::GradeTooLowException();
	std::cout << "Create Form " << std::endl;
}

AForm::AForm(const AForm &obj):
	_signed(obj._signed),
	_min_grade_sign(obj._min_grade_sign),
	_min_grade_exec(obj._min_grade_exec) {
	std::cout << "Copy Form " << std::endl;
}

AForm::~AForm() {
	std::cout << "Delete Form " << std::endl;
}

AForm	&AForm::operator=(const AForm &obj) {
	if (this != &obj) {
		(std::string)this->_name = obj.getName();
		this->_signed = obj.isSigned();
		*(int *)(&this->_min_grade_sign) = obj.getMinGradeSign();
		*(int *)(&this->_min_grade_exec) = obj.getMinGradeExec();
		std::cout << "Copy Form " << std::endl;
	}
	return (*this);
}

void	AForm::beSigned(const Bureaucrat &bureaucrat) {
	if (bureaucrat.getGrade() < this->getMinGradeSign())
		this->_signed = true;
	else
		throw AForm::GradeTooLowException();
}

std::string	AForm::getName() const {
	return this->_name;
}

bool	AForm::isSigned(void) const {
	return this->_signed;
}

int	AForm::getMinGradeSign(void) const {
	return this->_min_grade_sign;
}
int	AForm::getMinGradeExec(void) const {
	return this->_min_grade_exec;
}

std::ostream	&operator<<(std::ostream &out, const AForm &obj) {
	out << "                Name: " << obj.getName() << std::endl;
	out << "           Is signed: " << (obj.isSigned() ? "true" : "false") << std::endl;
	out << "   Min Grade to sign: " << obj.getMinGradeSign() << std::endl;
	out << "Min Grade to execute: " << obj.getMinGradeExec() << std::endl;
	return out;
}