/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 12:50:09 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/06 12:50:09 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main()
{
	// *************** Subject tests ***************

	Span sp = Span(5);

	sp.addNumber(5);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);

	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl << std::endl;

	// *************** Own tests ***************

	// Add a sixth number
	try {
		sp.addNumber( 15 );
	}
	catch ( std::exception & e ) {
		std::cout << "Too many numbers" << std::endl << std::endl;
	}

	// Coplien

	Span	sp1(5);

	sp1.addNumber( 1 );
	sp1.addNumber( 3 );
	sp1.addNumber( 7 );
	sp1.addNumber( 15 );


	Span	sp2( sp1 );
	Span	sp3( 0 );
	sp3 = sp1;

	sp2.addNumber( 20 );
	sp3.addNumber( 30 );

	std::cout << "sp1: " << sp1.longestSpan() << std::endl;
	std::cout << "sp2: " << sp2.longestSpan() << std::endl;
	std::cout << "sp3: " << sp3.longestSpan() << std::endl << std::endl;

	// 10000 numbers

	std::list<int>				rnd;

	srand( time(NULL) );

	for ( int i = 0; i < 10000; i++ )
		rnd.push_back( rand() );

	Span	large( 10000 );

	try {
		large.addNumber( rnd.begin(), rnd.end() );
	}
	catch ( std::exception &e ) {
		std::cout << "Can't add more numbers" << std::endl;
	}

	try {
		large.addNumber( 5 );
	}
	catch( std::exception &e ) {
		std::cout << "Too many numbers" << std::endl << std::endl;
	}

	try {

		std::cout << large.shortestSpan() << std::endl;
		std::cout << large.longestSpan() << std::endl;
	}
	catch ( std::exception &e ) {
		std::cout << "Something went wrong" << std::endl;
	}

	return 0;
}
