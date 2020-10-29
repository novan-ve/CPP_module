/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 13:26:11 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/25 13:26:12 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int 	main() {

	// ******************** Coplien ********************
	try {
		Bureaucrat	coplientest( "Coplien_bureaucrat", 100 );
		Form		coplien( "Coplien_form", 120, 120 );

		std::cout << coplien << std::endl;

		coplientest.signForm( coplien );

		Form		coplien2( coplien );
		Form		coplien3( "Coplien_form", 120, 120 );
		coplien3 = coplien;

		std::cout << coplien << std::endl;
		std::cout << coplien2 << std::endl;
		std::cout << coplien3 << std::endl << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	// ******************** Grade too low ********************
	try {
		Form	declaration( "Declaration", 155, 100 );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl << std::endl;
	}

	// ******************** Grade too high ********************
	try {
		Form	declaration( "Declaration", 100, 0 );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl << std::endl;
	}

	// ******************** Valid ********************
	try {
		Bureaucrat	hermes( "Hermes", 120 );
		Form		declaration( "Declaration", 120, 120 );

		hermes.signForm( declaration );
		std::cout << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	// ******************** Bureaucrat too low ********************
	try {
		Bureaucrat	hermes( "Hermes", 120 );
		Form		declaration( "Declaration", 100, 150 );

		hermes.signForm( declaration );
		std::cout << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
