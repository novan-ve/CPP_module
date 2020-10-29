/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 13:26:11 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/29 13:54:53 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include <iostream>

int 	main() {

	// ******************** Coplien ********************

	try {
		PresidentialPardonForm	coplien( "Coplien_testing" );
		Bureaucrat				coplientest( "Coplien_bureraucrat", 3 );

		coplientest.signForm( coplien );
		coplientest.executeForm( coplien );

		PresidentialPardonForm	coplien2( coplien );
		PresidentialPardonForm	coplien3( "Gets assigned" );
		coplien3 = coplien;

		std::cout << coplien << std::endl;
		std::cout << coplien2 << std::endl;
		std::cout << coplien3 << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		RobotomyRequestForm	coplien( "Coplien_testing" );
		Bureaucrat				coplientest( "Coplien_bureraucrat", 3 );

		coplientest.signForm( coplien );
		coplientest.executeForm( coplien );

		RobotomyRequestForm	coplien2( coplien );
		RobotomyRequestForm	coplien3( "Gets assigned" );
		coplien3 = coplien;

		std::cout << coplien << std::endl;
		std::cout << coplien2 << std::endl;
		std::cout << coplien3 << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	try {
		ShrubberyCreationForm	coplien( "Coplien_testing" );
		Bureaucrat				coplientest( "Coplien_bureraucrat", 3 );

		coplientest.signForm( coplien );
		coplientest.executeForm( coplien );

		ShrubberyCreationForm	coplien2( coplien );
		ShrubberyCreationForm	coplien3( "Gets assigned" );
		coplien3 = coplien;

		std::cout << coplien << std::endl;
		std::cout << coplien2 << std::endl;
		std::cout << coplien3 << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// ******************** Form is not signed ********************

	try {
		RobotomyRequestForm		notSigned( "notSigned" );
		Bureaucrat				hermes( "Hermes", 3 );

		hermes.executeForm( notSigned );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	std::cout << std::endl;

	// ******************** Bureaucrat grade too low ********************

	try {
		ShrubberyCreationForm	tree( "home" );
		Bureaucrat				hermes( "Hermes", 140 );

		hermes.signForm( tree );
		hermes.executeForm( tree );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}
	
	return 0;
}
