/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:26:03 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:26:04 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Enemy.hpp"
#include <iostream>

Enemy::Enemy( int hp, std::string const & type ) : _hp( hp ), _type( type ) {}

Enemy::Enemy( Enemy const & src ) {

	*this = src;
	std::cout << "Enemy " << src.getType() << " has been copied" << std::endl;
}

Enemy &	Enemy::operator=( Enemy const & rhs ) {

	if ( this != &rhs ) {

		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	std::cout << "Enemy " << rhs.getType() << " has been assigned" << std::endl;

	return *this;
}

Enemy::~Enemy() {}

std::string const &	Enemy::getType() const {

	return this->_type;
}

int 			Enemy::getHP() const {

	return this->_hp;
}

void 			Enemy::takeDamage( int dmg ) {

	if ( dmg >= 0) {

		if ( dmg > this->_hp )
			this->_hp = 0;
		else
			this->_hp -= dmg;
	}
}
