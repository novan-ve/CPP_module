/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:03:07 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:03:08 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"
#include <iostream>

AMateria::AMateria( std::string const & type ) : _type( type ), _xp( 0 ) {}

AMateria::AMateria( AMateria const & src ) {

	*this = src;
}

AMateria &	AMateria::operator=( AMateria const & rhs ) {

	if ( this != &rhs ) {

		this->_xp = rhs.getXP();
		this->_type = rhs.getType();
	}

	return *this;
}

AMateria::~AMateria() {}

std::string const &	AMateria::getType() const {

	return this->_type;
}

unsigned int 		AMateria::getXP() const {

	return this->_xp;
}

void 				AMateria::use( ICharacter & target ) {

	std::cout << target.getName();
	this->_xp += 10;
}
