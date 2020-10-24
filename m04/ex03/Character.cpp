/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:03:50 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:03:52 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( std::string const & name ) : _name( name ) {

	for ( int i = 0; i < 4; i++ )
		this->_slots[ i ] = NULL;
}

Character::Character( Character const & src ) {

	this->_name = src._name;

	for ( int i = 0; i < 4; i++ ) {

		if ( !src._slots[ i ] )
			continue;

		this->_slots[ i ] = src._slots[ i ]->clone();

		if ( !this->_slots[ i ] ) {

			std::cout << "Error: clone failed in Character copy constructor" << std::endl;

			for ( int j = 0; j < i; j++ ) {

				if ( this->_slots[ j ] )
					 delete this->_slots[ j ];
			}
			return;
		}
	}
}

Character &	Character::operator=( Character const & rhs ) {

	for ( int i = 0; i < 4; i++ ) {

		if (this->_slots[ i ] )
			delete this->_slots[ i ];
		this->_slots[ i ] = NULL;
	}

	this->_name = rhs._name;

	for ( int i = 0; i < 4; i++ ) {

		if ( !rhs._slots[ i ] )
			continue;

		this->_slots[ i ] = rhs._slots[ i ]->clone();

		if ( !this->_slots[ i ] ) {

			std::cout << "Error: clone failed in Character assignation constructor" << std::endl;

			for ( int j = 0; j < i; j++ ) {

				if ( this->_slots[ j ] )
					delete this->_slots[j];
			}
			return *this;
		}
	}
	return *this;
}

Character::~Character() {

	for ( int i = 0; i < 4; i++ ) {

		if ( this->_slots[ i ] )
			delete this->_slots[ i ];
	}
}

std::string const &	Character::getName() const {

	return this->_name;
}

void 				Character::equip( AMateria* m ) {

	if ( !m )
		return;

	for ( int i = 0; i < 4; i++ ) {

		if ( this->_slots[ i ] )
			if ( this->_slots[ i ]->getType() == m->getType() )
				return;
	}

	for ( int i = 0; i < 4; i++ ) {

		if ( !this->_slots[ i ] ) {

			this->_slots[ i ] = m;
			break;
		}
	}
}

void 				Character::unequip( int idx ) {

	if ( idx >= 0 && idx < 4 ) {

		if ( this->_slots[ idx ] )
			this->_slots[ idx ] = NULL;
	}
}

void 				Character::use( int idx, ICharacter & target ) {

	if ( idx >= 0 && idx < 4 ) {

		if ( this->_slots[ idx ] )
			this->_slots[ idx ]->use(target);
	}
}
