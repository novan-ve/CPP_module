/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.cpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 18:02:01 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/27 18:02:03 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
#include <iostream>

PresidentialPardonForm::PresidentialPardonForm( std::string const & target ) :
		Form( "presidential pardon", 25, 5 ) {

	this->setTarget( target );
}

PresidentialPardonForm::PresidentialPardonForm( PresidentialPardonForm const & src ) : Form( src ) {

	*this = src;
}

PresidentialPardonForm &	PresidentialPardonForm::operator=( PresidentialPardonForm const & rhs ) {

	Form::operator=( rhs );

	if ( this != &rhs )
		this->setTarget( rhs.getTarget() );

	return *this;
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void	PresidentialPardonForm::execute( Bureaucrat const & executor ) const {

	Form::execute( executor );

	std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
