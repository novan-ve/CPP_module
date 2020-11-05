/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 14:04:31 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/05 15:11:30 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int 	main() {

	Array< int >	empty;
	Array< int >	one( 3 );

	// Set array elements
	one[0] = 1;
	one[1] = 2;
	one[2] = 3;

	// Print array elements
	for ( unsigned int i = 0; i < one.size(); i++ )
		std::cout << "one:\t" << one[i] << std::endl;


	// Try and print nonexistent element
	try {
		std::cout << one[100] << std::endl;
	}
	catch ( std::exception &e ) {}

	try {
		std::cout << one[-1] << std::endl;
	}
	catch ( std::exception &e ) {}

	try {
		std::cout << empty[0] << std::endl;
	}
	catch ( std::exception &e ) {}


	// Try assigning outside of array
	try {
		empty[0] = 42;
	}
	catch ( std::exception &e ) {}

	try {
		one[21] = 42;
	}
	catch ( std::exception &e ) {}

	// Try creating array with negative size
	try {
		Array< int >	wrong( -1 );
	}
	catch ( std::exception &e ) {}

	std::cout << std::endl;


	// Coplien
	Array< int >	two( one );
	Array< int >	three;
	three = one;

	one[0] = 10;
	one[1] = 11;
	one[2] = 12;

	for ( unsigned int i = 0; i < one.size(); i++ )
		std::cout << "one:\t" << one[i] << std::endl;
	for ( unsigned int i = 0; i < two.size(); i++ )
		std::cout << "two:\t" << two[i] << std::endl;
	for ( unsigned int i = 0; i < three.size(); i++ )
		std::cout << "three:\t" << three[i] << std::endl;


	// Different type
	Array< std::string >	str( 2 );

	str[0] = "Hello";
	str[1] = "world";

	std::cout << std::endl << str[0] << " " << str[1] << std::endl;
	
	return 0;
}
