/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:24:56 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:24:59 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AWeapon.hpp"
#include <iostream>

AWeapon::AWeapon( std::string const & name, int apcost, int damage) :
				_name( name ), _apcost( apcost ), _damage( damage ) {
}

AWeapon::AWeapon( AWeapon const & src ) {

	*this = src;
	std::cout << "Weapon " << src.getName() << " has been copied" << std::endl;
}

AWeapon &	AWeapon::operator=( AWeapon const & rhs ) {

	if ( this != &rhs ) {

		this->_apcost = rhs.getAPCost();
		this->_damage = rhs.getDamage();
		this->_name = rhs.getName();
	}
	std::cout << "Weapon " << rhs.getName() << " has been assigned" << std::endl;
}

AWeapon::~AWeapon() {}

std::string 	AWeapon::getName() const {

	return this->_name;
}

int 			AWeapon::getAPCost() const {

	return this->_apcost;
}

int 			AWeapon::getDamage() const {

	return this->_damage;
}
