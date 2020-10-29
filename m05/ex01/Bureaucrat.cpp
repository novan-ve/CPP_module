/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 13:25:59 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/25 13:26:04 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

Bureaucrat::Bureaucrat( std::string const & newName, int newGrade ) : _name( newName ), _grade( newGrade ) {

	if ( this->_grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	else if ( this->_grade > 150 )
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) : _name( src.getName() ) {

	*this = src;
	if ( this->_grade < 1 )
		throw Bureaucrat::GradeTooHighException();
	else if ( this->_grade > 150 )
		throw Bureaucrat::GradeTooLowException();
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {

	if ( this != &rhs ) {
		this->_grade = rhs.getGrade();
	}

	return *this;
}

Bureaucrat::~Bureaucrat() {}

std::string const &	Bureaucrat::getName() const {

	return this->_name;
}

int 				Bureaucrat::getGrade() const {

	return this->_grade;
}

void				Bureaucrat::increment() {

	this->_grade--;
	if ( this->_grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if ( this->_grade < 1 )
		throw Bureaucrat::GradeTooHighException();
}

void 				Bureaucrat::decrement() {

	this->_grade++;
	if ( this->_grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if ( this->_grade < 1 )
		throw Bureaucrat::GradeTooHighException();
}

void 				Bureaucrat::signForm( Form & i ) {

	try {
		i.beSigned( *this );
		std::cout << this->_name << " signs " << i.getName() << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << this->_name << " cannot sign " << i.getName() << " because the " << e.what() << std::endl;
	}
}

std::ostream &		operator<<( std::ostream & o, Bureaucrat const & i ) {

	o << i.getName() << ", bureaucrat grade " << i.getGrade();

	return o;
}

Bureaucrat::GradeTooHighException::GradeTooHighException() {}

Bureaucrat::GradeTooHighException::GradeTooHighException( GradeTooHighException const & src ) {

	*this = src;
}

Bureaucrat::GradeTooHighException &	Bureaucrat::GradeTooHighException::operator=(const GradeTooHighException &rhs) {

	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooHighException::~GradeTooHighException() {}

const char * Bureaucrat::GradeTooHighException::what() const throw() {

	return "grade is too high";
}

Bureaucrat::GradeTooLowException::GradeTooLowException() {}

Bureaucrat::GradeTooLowException::GradeTooLowException( GradeTooLowException const & src ) {

	*this = src;
}

Bureaucrat::GradeTooLowException &	Bureaucrat::GradeTooLowException::operator=(const GradeTooLowException &rhs) {

	(void)rhs;
	return *this;
}

Bureaucrat::GradeTooLowException::~GradeTooLowException() {}

const char * Bureaucrat::GradeTooLowException::what() const throw() {

	return "grade is too low";
}
