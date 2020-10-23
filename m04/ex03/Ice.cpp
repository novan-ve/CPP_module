/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:03:22 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:03:23 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria( "ice" ) {}

Ice::Ice( const Ice & src ) : AMateria( src ) {}

Ice &	Ice::operator=( Ice const & rhs ) {

	if ( this != &rhs )
		this->_xp = rhs.getXP();

	std::cout << "Ice has been assigned" << std::endl;

	return *this;
}

Ice::~Ice() {}

AMateria*	Ice::clone() const {

	Ice			tmpIce;
	tmpIce._xp = this->_xp;

	AMateria*	tmpMat = new Ice( tmpIce );

	return tmpMat;
}

void 		Ice::use( ICharacter & target ) {

	std::cout << "* shoots an ice bolt at ";
	AMateria::use( target );
	std::cout << " *" << std::endl;

}
