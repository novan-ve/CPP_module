/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 13:56:45 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/16 13:56:50 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include <iostream>

Sorcerer::Sorcerer( std::string const & name, std::string const & title) : _name( name ), _title( title ) {

	std::cout << this->_name << ", " << this->_title << ", is born!" << std::endl;
}

Sorcerer::Sorcerer( Sorcerer const & src ) {

	std::cout << "Sorcerer " << src.getName() << " has been copied" << std::endl;

	*this = src;
}

Sorcerer &	Sorcerer::operator=( Sorcerer const & rhs ) {

	std::cout << "Sorcerer " << rhs.getName() << " has been assigned" << std::endl;

	if (this != &rhs ) {

		this->_name = rhs.getName();
		this->_title = rhs.getTitle();
	}

	return *this;
}

Sorcerer::~Sorcerer() {

	std::cout << this->_name << ", " << this->_title << ", is dead. Consequences will never be the same!" << std::endl;
}

std::string 	Sorcerer::getName() const {

	return this->_name;
}

std::string 	Sorcerer::getTitle() const {

	return this->_title;
}

void			Sorcerer::polymorph( Victim const & i ) const {

	i.getPolymorphed();
}

std::ostream &	operator<<( std::ostream & o, Sorcerer const & i ) {

	o << "I am " << i.getName() << ", " << i.getTitle() << ", and I like ponies!" << std::endl;

	return o;
}
