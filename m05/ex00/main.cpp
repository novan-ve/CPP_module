/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 13:26:11 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/29 13:49:57 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include <iostream>

int 	main() {

	// ******************** Coplien ********************
	try {
		Bureaucrat coplien( "Coplien_test", 100 );
		Bureaucrat coplien2( coplien );
		Bureaucrat coplien3( "Coplien_test", 120 );

		coplien3 = coplien;

		std::cout << coplien << std::endl;
		std::cout << coplien2 << std::endl;
		std::cout << coplien3 << std::endl << std::endl;
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	// ********** Valid grade, decrement to invalid **********
	try {

		Bureaucrat	hermes( "Hermes", 150 );
		std::cout << hermes << std::endl;
		hermes.decrement();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl << std::endl;
	}

	// ********** Valid grade, increment to invalid **********
	try {

		Bureaucrat	hermes( "Hermes", 1 );
		std::cout << hermes << std::endl;
		hermes.increment();
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl << std::endl;
	}

	// ******************** Grade too low ********************
	try {
		Bureaucrat	hermes( "Hermes", 151 );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl << std::endl;
	}

	// ******************** Grade too high ********************
	try {
		Bureaucrat	hermes( "Hermes", 0 );
	}
	catch ( std::exception & e ) {
		std::cout << e.what() << std::endl;
	}

	return 0;
}
