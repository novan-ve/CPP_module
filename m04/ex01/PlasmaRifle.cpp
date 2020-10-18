/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:25:21 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:25:22 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "PlasmaRifle.hpp"
#include <iostream>

PlasmaRifle::PlasmaRifle() : AWeapon( "Plasma Rifle", 5, 21) {}

PlasmaRifle::PlasmaRifle( PlasmaRifle const & src ) : AWeapon( src ) {

	std::cout << "PlasmaRifle " << src.getName() << " has been copied" << std::endl;
}

PlasmaRifle &	PlasmaRifle::operator=( PlasmaRifle const & rhs ) {

	if ( this != &rhs ) {

		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
		this->_name = rhs.getName();
	}
	std::cout << "PlasmaRifle " << rhs.getName() << " has been assigned" << std::endl;

	return *this;
}

PlasmaRifle::~PlasmaRifle() {}

void 			PlasmaRifle::attack() const {

	std::cout << "* piouuu piouuu piouuu *" << std::endl;
}
