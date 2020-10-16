/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 13:57:04 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/16 13:57:05 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Victim.hpp"
#include <iostream>

Victim::Victim( std::string const & name ) : _name( name ) {

	std::cout << "Some random victim called " << name << " just appeared!" << std::endl;
}

Victim::Victim( Victim const & src ) {

	std::cout << "Victim " << src.getName() << " has been copied" << std::endl;

	*this = src;
}

Victim &	Victim::operator=( Victim const & rhs ) {

	std::cout << "Victim " << rhs.getName() << " has been assigned" << std::endl;

	if ( this != &rhs )
		this->_name = rhs.getName();

	return *this;
}

Victim::~Victim() {

	std::cout << "Victim " << this->_name << " just died for no apparent reason!" << std::endl;
}

std::string Victim::getName() const {

	return this->_name;
}

void 		Victim::setName( std::string name ) {

	this->_name = name;
}

void 		Victim::getPolymorphed() const {

	std::cout << this->_name << " has been turned into a cute little sheep!" << std::endl;
}

std::ostream &	operator<<( std::ostream & o, Victim const & i ) {

	o << "I'm " << i.getName() << " and I like otters!" << std::endl;

	return o;
}
