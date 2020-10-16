/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 15:32:40 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/14 15:32:53 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include <iostream>

ClapTrap::ClapTrap( void ) {

	std::cout << "Cl4P-TP anonymous is being constructed" << std::endl;

	this->_name = "anonymous";
	this->_level = 0;
	this->_hitPoints = 0;
	this->_maxHitPoints = 0;
	this->_energyPoints = 0;
	this->_maxEnergyPoints = 0;
	this->_meleeDamage = 0;
	this->_rangedDamage = 0;
	this->_armorReduction = 0;
}

ClapTrap::ClapTrap( std::string const & newName ) {

	std::cout << "CL4P-TP " << newName << " is being constructed" << std::endl;

	this->_level = 0;
	this->_name = newName;
	this->_hitPoints = 0;
	this->_maxHitPoints = 0;
	this->_energyPoints = 0;
	this->_maxEnergyPoints = 0;
	this->_meleeDamage = 0;
	this->_rangedDamage = 0;
	this->_armorReduction = 0;
}

ClapTrap::ClapTrap( ClapTrap const & src ) {

	std::cout << "CL4P-TP " << src._name << " has been copied" << std::endl;
	*this = src;
}

ClapTrap &	ClapTrap::operator=( ClapTrap const & rhs ) {

	std::cout << "CL4P-TP " << this->_name << " has been assigned to " << rhs._name << std::endl;

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

ClapTrap::~ClapTrap( void ) {

	std::cout << "CL4P-TP " << this->_name << " is being destructed" << std::endl;
}

void 	ClapTrap::takeDamage( unsigned int amount ) {

	if ( amount - this->_armorReduction >= this->_hitPoints ) {

		this->_hitPoints = 0;
		std::cout << "CL4P-TP " << this->_name << " has taken " << amount;
		std::cout << " points of damage and has 0 HP left" << std::endl;
	}
	else {

		this->_hitPoints -= (amount - this->_armorReduction);
		std::cout << "CL4P-TP " << this->_name << " has taken " << amount;
		std::cout << " points of damage and has " << this->_hitPoints << " HP left" << std::endl;
	}
}

void 	ClapTrap::beRepaired( unsigned int amount ) {

	if ( amount + this->_hitPoints >= this->_maxHitPoints )
		this->_hitPoints = this->_maxHitPoints;
	else
		this->_hitPoints += amount;

	std::cout << "CL4P-TP " << this->_name << " has repaired " << amount;
	std::cout << " points of HP and is at " << this->_hitPoints << " HP" << std::endl;
}

std::string 	ClapTrap::getName( void ) {

	return this->_name;
}