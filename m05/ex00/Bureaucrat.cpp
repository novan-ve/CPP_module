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

Bureaucrat::Bureaucrat( std::string const & newName, int newGrade ) : _name( newName ), _grade( newGrade ) {

	if ( this->_grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if ( this->_grade < 1 )
		throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat( Bureaucrat const & src ) {

	*this = src;
}

Bureaucrat &	Bureaucrat::operator=( Bureaucrat const & rhs ) {

	if ( this != &rhs ) {

		Bureaucrat	tmp( rhs.getName(), rhs.getGrade() );
		*this = tmp;
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

	this->_grade++;
	if ( this->_grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if ( this->_grade < 1 )
		throw Bureaucrat::GradeTooHighException();
}

void 				Bureaucrat::decrement() {

	this->_grade--;
	if ( this->_grade > 150 )
		throw Bureaucrat::GradeTooLowException();
	else if ( this->_grade < 1 )
		throw Bureaucrat::GradeTooHighException();
}
