/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 13:57:24 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/16 13:57:27 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Peon.hpp"
#include <iostream>

void 	otherTests( void )
{
	Peon*		a = new Peon( "a" );
	Victim*		b = new Peon( "b" );

	a->getPolymorphed();
	b->getPolymorphed();

	delete a;
	delete b;

	Victim		c( "Coplien_test" );
	Victim		d( c );
	Victim		e( "Get_assigned" );
	e = c;

	std::cout << c << d << e << std::endl;
}

int main()
{
	otherTests();
	std::cout << std::endl << "Subject tests: " << std::endl << std::endl;

	// Subject tests
	Sorcerer robert("Robert", "the Magnificent");

	Victim jim("Jimmy");
	Peon joe("Joe");

	std::cout << robert << jim << joe;

	robert.polymorph(jim);
	robert.polymorph(joe);

	return 0;
}
