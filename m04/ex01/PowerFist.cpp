/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PowerFist.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:25:34 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:25:35 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PowerFist.hpp"
#include <iostream>

PowerFist::PowerFist() : AWeapon( "Power Fist", 8, 50 ) {}

PowerFist::PowerFist( PowerFist const & src ) : AWeapon( src ) {

	std::cout << "PowerFist " << src.getName() << " has been copied" << std::endl;
}

PowerFist &		PowerFist::operator=( PowerFist const & rhs ) {

	if ( this != &rhs ) {

		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
		this->_name = rhs.getName();
	}
	std::cout << "PowerFist " << rhs.getName() << " has been assigned" << std::endl;

	return *this;
}

PowerFist::~PowerFist() {}

void 			PowerFist::attack() const {

	std::cout << "* pschhh... SBAM! *" << std::endl;
}
