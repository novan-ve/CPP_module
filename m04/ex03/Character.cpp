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

Character::Character( std::string const & name ) : _name( name ), _used( 0 ) {}

Character::Character( Character const & src ) {

	this->_used = src._used;
	this->_name = src._name;

	if ( this->_used )
		this->_slots = new ( std::nothrow ) AMateria*[ this->_used ];

}

Character &	Character::operator=( Character const & rhs ) {

}

Character::~Character() {}

std::string const &	Character::getName() const {

	return this->_name;
}

void 				Character::equip( AMateria* m ) {


}

void 				Character::unequip( int idx ) {


}

void 				Character::use( int idx, ICharacter & target ) {

	if ( idx <= this->_used - 1 && idx >= 0)
	this->_slots[ idx ]->use( target );
}
