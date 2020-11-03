/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/03 15:44:21 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/03 15:44:22 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <iostream>
#include <stdlib.h>
#include <sys/time.h>
#include <exception>

Base *	generate( void ) {

	timeval	t;
	int 	val;

	gettimeofday( &t, NULL );
	srand( t.tv_usec );
	val = rand() % 3;

	if ( val == 0 )
		return new A;
	else if ( val == 1 )
		return new B;
	return new C;
}

void	identify_from_pointer( Base * p ) {

	A *		a = dynamic_cast< A * >( p );
	if ( a ) {
		std::cout << "A";
		return;
	}

	B *		b = dynamic_cast< B * >( p );
	if ( b ) {
		std::cout << "B";
		return;
	}

	C *		c = dynamic_cast< C * >( p );
	if ( c ) {
		std::cout << "C";
		return;
	}
}

void	identify_from_reference( Base & p ) {

	try {
		__attribute__((unused)) A &		a = dynamic_cast< A & >( p );
		std::cout << "A";
		return;
	}
	catch ( std::exception & e ) {}

	try {
		__attribute__((unused)) B &		b = dynamic_cast< B & >( p );
		std::cout << "B";
		return;
	}
	catch ( std::exception & e ) {}

	try {
		__attribute__((unused)) C &		c = dynamic_cast< C & >( p );
		std::cout << "C";
		return;
	}
	catch ( std::exception & e ) {}

}

int 	main() {

	Base *	ptr;

	for ( int i = 0; i < 5; i++ ) {

		ptr = generate();

		std::cout << "Test " << i + 1 << " by pointer: ";
		identify_from_pointer( ptr );
		std::cout << std::endl;

		std::cout << "Test " << i + 1 << " by reference: ";
		identify_from_reference( *ptr );
		std::cout << std::endl;

		delete ptr;
	}

	return 0;
}
