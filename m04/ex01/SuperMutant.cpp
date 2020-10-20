/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:26:21 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:26:22 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperMutant.hpp"
#include <iostream>

SuperMutant::SuperMutant() : Enemy( 170, "Super Mutant" ) {

	std::cout << "Gaaah. Me want smash heads!" << std::endl;
}

SuperMutant::SuperMutant( SuperMutant const & src ) : Enemy( src ) {

	std::cout << "SuperMutant " << src.getType() << " has been copied" << std::endl;
}

SuperMutant &	SuperMutant::operator=( SuperMutant const & rhs ) {

	if ( this != &rhs ) {

		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	std::cout << "SuperMutant " << rhs.getType() << " has been assigned" << std::endl;

	return *this;
}

SuperMutant::~SuperMutant() {

	std::cout << "Aaargh..." << std::endl;
}

void 		SuperMutant::takeDamage( int dmg ) {

	Enemy::takeDamage( dmg - 3 );
}
