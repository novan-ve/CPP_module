/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:03:31 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:03:32 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"
#include <iostream>

Cure::Cure() : AMateria( "cure" ) {}

Cure::Cure( Cure const & src ) : AMateria( src ) {}

Cure &	Cure::operator=( Cure const & rhs ) {

	if ( this != &rhs )
		this->_xp = rhs.getXP();

	return *this;
}

Cure::~Cure() {}

AMateria*	Cure::clone() const {

	Cure		tmpCure;
	tmpCure._xp = this->_xp;

	AMateria*	tmpMat = new ( std::nothrow ) Cure( tmpCure );

	return tmpMat;
}

void 		Cure::use( ICharacter & target ) {

	std::cout << "* heals ";
	AMateria::use( target );
	std::cout << "'s wounds *" << std::endl;
}
