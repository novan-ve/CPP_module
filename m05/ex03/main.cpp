/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 13:26:11 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/29 13:58:21 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"
#include <iostream>

int 	main() {

	Bureaucrat	hermes( "Hermes", 3 );
	Intern  	someRandomIntern;
	Form*   	rrf;

	// ******************** Robotomy request ********************

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");

	std::cout << *rrf << std::endl;
	delete rrf;
	std::cout << std::endl;

	// ******************** Presidential pardon ********************

	rrf = someRandomIntern.makeForm( "presidential pardon", "Declaration" );

	hermes.executeForm( *rrf );
	hermes.signForm( *rrf );
	hermes.executeForm( *rrf );
	delete rrf;
	std::cout << std::endl;

	// ******************** Shrubbery creation ********************

	rrf = someRandomIntern.makeForm( "shrubbery creation", "home" );

	std::cout << *rrf << std::endl;
	delete rrf;
	std::cout << std::endl;

	// ******************** Non existent form ********************

	rrf = someRandomIntern.makeForm( "unknown form", "something" );

	if ( rrf == NULL )
		std::cout << "Unknown form returned NULL" << std::endl;
	
	return 0;
}
