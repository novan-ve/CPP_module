/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 16:21:19 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/15 16:21:20 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "SuperTrap.hpp"
#include <iostream>

SuperTrap::SuperTrap( void ) {

	std::cout << "SUP3R-TP anonymous: We are the ClapTraps and we are legion! Viva la Robolution!" << std::endl;

	this->_level = 1;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armorReduction = 5;
}

SuperTrap::SuperTrap( std::string const & newName ) : ClapTrap( newName ), FragTrap( newName ), NinjaTrap( newName ) {

	std::cout << "SUP3R-TP " << newName << ": We are the ClapTraps and we are legion! Viva la Robolution!";
	std::cout << std::endl;

	this->_level = 1;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 20;
	this->_armorReduction = 5;
}

SuperTrap::SuperTrap( SuperTrap const & src ) {

	std::cout << "SUP3R-TP " << src._name << " has been copied" << std::endl;
	*this = src;
}

SuperTrap &	SuperTrap::operator=( SuperTrap const & rhs ) {

	std::cout << "SUP3R-TP " << this->_name << " has been assigned to " << rhs._name << std::endl;

	if ( this != &rhs ) {

		this->_name = rhs._name;
		this->_level = rhs._level;
		this->_hitPoints = rhs._hitPoints;
		this->_maxHitPoints = rhs._maxHitPoints;
		this->_energyPoints = rhs._energyPoints;
		this->_maxEnergyPoints = rhs._maxEnergyPoints;
		this->_meleeDamage = rhs._meleeDamage;
		this->_rangedDamage = rhs._rangedDamage;
		this->_armorReduction = rhs._armorReduction;
	}

	return *this;
};

SuperTrap::~SuperTrap( void ) {

	std::cout << "SUP3R-TP " << this->_name << ": Never give up, brothers and sisters!";
	std::cout << " Fulfill the destiny of the Robolution!" << std::endl;
}

void 	SuperTrap::rangedAttack( const std::string & target ) {

	FragTrap::rangedAttack( target );
}

void 	SuperTrap::meleeAttack( const std::string & target ) {

	NinjaTrap::meleeAttack( target );
}
