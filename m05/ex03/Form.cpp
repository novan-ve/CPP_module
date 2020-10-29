/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 14:53:16 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/27 14:53:17 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include <iostream>

Form::Form( std::string const & name, int signGrade, int execGrade ) :
			_signed( false ), _signGrade( signGrade ), _execGrade( execGrade ), _name( name ) {

	if ( this->_signGrade < 1 || this->_execGrade < 1 )
		throw Form::GradeTooHighException();
	else if ( this->_signGrade > 150 || this->_execGrade > 150 )
		throw Form::GradeTooLowException();
}

Form::Form( Form const & src ) : _signGrade( src.getSignGrade() ), _execGrade( src.getExecGrade() ), _name( src.getName() ) {

	*this = src;
	if ( this->_signGrade < 1 || this->_execGrade < 1 )
		throw Form::GradeTooHighException();
	else if ( this->_signGrade > 150 || this->_execGrade > 150 )
		throw Form::GradeTooLowException();
}

Form &	Form::operator=( Form const & rhs ) {

	if ( this != &rhs ) {
		this->_signed = rhs.getSigned();
	}

	return *this;
}

Form::~Form() {}

bool 				Form::getSigned() const {

	return this->_signed;
}


int		 			Form::getSignGrade() const {

	return this->_signGrade;
}

int					Form::getExecGrade() const {

	return this->_execGrade;
}

std::string const &	Form::getName() const {

	return this->_name;
}

std::string const & Form::getTarget() const {

	return this->_target;
}

void 				Form::beSigned( Bureaucrat const & i ) {

	if ( this->_signGrade < i.getGrade() )
		throw Form::GradeTooLowException();
	this->_signed = true;
}

void 				Form::execute( Bureaucrat const & executor ) const {

	if ( !Form::getSigned() )
		throw Form::FormNotSignedException();
	if ( executor.getGrade() > this->getExecGrade() )
		throw Form::GradeTooLowException();
}

void 				Form::setTarget( std::string const & target ) {

	this->_target = target;
}

std::ostream &		operator<<( std::ostream & o, Form const & i ) {

	o << i.getName() << " needs grade " << i.getSignGrade();
	o << " to sign, grade " << i.getExecGrade() << " to execute and is ";
	if ( !i.getSigned() )
		o << "not ";
	o << "signed";

	return o;
}

Form::GradeTooHighException::GradeTooHighException() {}

Form::GradeTooHighException::GradeTooHighException( GradeTooHighException const & src ) {

	*this = src;
}

Form::GradeTooHighException &	Form::GradeTooHighException::operator=(const GradeTooHighException &rhs) {

	(void)rhs;
	return *this;
}

Form::GradeTooHighException::~GradeTooHighException() {}

const char * Form::GradeTooHighException::what() const throw() {

	return "grade is too high";
}

Form::GradeTooLowException::GradeTooLowException() {}

Form::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src ) {

	*this = src;
}

Form::GradeTooLowException &	Form::GradeTooLowException::operator=(const GradeTooLowException &rhs) {

	(void)rhs;
	return *this;
}

Form::GradeTooLowException::~GradeTooLowException() {}

const char * Form::GradeTooLowException::what() const throw() {

	return "grade is too low";
}

Form::FormNotSignedException::FormNotSignedException() {}

Form::FormNotSignedException::FormNotSignedException( FormNotSignedException const & src ) {

	*this = src;
}

Form::FormNotSignedException &	Form::FormNotSignedException::operator=(const FormNotSignedException &rhs) {

	(void)rhs;
	return *this;
}

Form::FormNotSignedException::~FormNotSignedException() {}

const char * Form::FormNotSignedException::what() const throw() {

	return "form is not signed";
}
