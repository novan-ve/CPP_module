/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 13:57:17 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/16 13:57:18 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Peon.hpp"
#include <iostream>

Peon::Peon( std::string const & name ) : Victim( name ) {

	std::cout << "Zog zog." << std::endl;
}

Peon::Peon( Peon const & src ) : Victim( src.getName() ) {

	std::cout << "Peon " << src.getName() << " has been copied" << std::endl;

	*this = src;
}

Peon &	Peon::operator=( Peon const & rhs ) {

	std::cout << "Peon " << rhs.getName() << " has been assigned" << std::endl;

	if ( this != &rhs )
		setName( rhs.getName() );

	return *this;
}

Peon::~Peon() {

	std::cout << "Bleuark..." << std::endl;
}

void 	Peon::getPolymorphed() const {

	std::cout << getName() << " has been turned into a pink pony!" << std::endl;
}

std::ostream &	operator<<( std::ostream & o, Peon const & i ) {

	o << "I'm " << i.getName() << " and I like otters!" << std::endl;

	return o;
}
