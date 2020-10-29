/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 17:52:39 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/29 13:58:02 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

Intern::Intern() {}

Intern::Intern( Intern const & src ) {

	*this = src;
}

Intern &	Intern::operator=( Intern const & rhs ) {

	( void )rhs;
	return *this;
}

Intern::~Intern() {}

Form *		Intern::makeForm( std::string const & className, std::string const & target ) const {

	std::string	formNames[] = {"presidential pardon", "robotomy request", "shrubbery creation"};
	Form*		form1 = new PresidentialPardonForm( target );
	Form*		form2 = new RobotomyRequestForm( target );
	Form*		form3 = new ShrubberyCreationForm( target );

	Form*	forms[] = { form1, form2, form3 };

	for ( int i = 0; i < 3; i++ ) {

		if ( !className.compare( formNames[i] ) ) {

			for ( int j = 0; j < i; j++ )
				delete forms[j];
			for ( int k = i + 1; k < 3; k++ )
				delete forms[k];

			std::cout << "Intern creates " << forms[i]->getName() << std::endl;
			return forms[i];
		}
	}
	std::cout << "Requested form not known" << std::endl;
	for ( int i = 0; i < 3; i++ )
		delete forms[i];

	return NULL;
}
