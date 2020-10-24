/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:26:49 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:26:50 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include <iostream>

Character::Character( std::string const & name ) : _ap( 40 ), _name( name ), _weapon( 0 ) {}

Character::Character( Character const & src ) {

	*this = src;
	std::cout << "Character " << src.getName() << " has been copied" << std::endl;
}

Character &			Character::operator=( Character const & rhs ) {

	if ( this != &rhs ) {

		this->_ap = rhs.getAP();
		this->_name = rhs.getName();
		this->_weapon = rhs.getWeapon();
	}
	std::cout << "Character " << rhs.getName() << " has been assigned" << std::endl;

	return *this;
}

Character::~Character() {}

void 				Character::recoverAP() {

	if ( this->_ap + 10 <= 40 )
		this->_ap += 10;
}

void 				Character::equip( AWeapon * weapon ) {

	this->_weapon = weapon;
}

void 				Character::attack( Enemy * target ) {

	if ( this->_weapon && target && this->_weapon->getAPCost() <= this->_ap ) {

		std::cout << this->_name << " attacks " << target->getType();
		std::cout << " with a " << this->_weapon->getName() << std::endl;

		this->_weapon->attack();

		target->takeDamage(this->_weapon->getDamage());
		this->_ap -= this->_weapon->getAPCost();

		if ( target->getHP() == 0 ) {

			delete target;
		}
	}
}

int 				Character::getAP() const {

	return this->_ap;
}

AWeapon *			Character::getWeapon() const {

	return this->_weapon;
}

std::string const &	Character::getName() const {

	return this->_name;
}

std::ostream &	operator<<( std::ostream & o, Character const & i ) {

	if ( i.getWeapon() )
		o << i.getName() << " has " << i.getAP() << " AP and wields a " << i.getWeapon()->getName() << std::endl;
	else
		o << i.getName() << " has " << i.getAP() << " AP and is unarmed" << std::endl;

	return o;
}
