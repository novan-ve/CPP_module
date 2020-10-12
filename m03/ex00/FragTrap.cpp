/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.cpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 13:25:23 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/12 13:25:24 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include <iostream>

FragTrap::FragTrap( void ) {

	std::cout << "FR4G-TP Anonymous has started bootup sequence" << std::endl;

	this->_name = "Anonymous";
	this->_level = 1;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeDamage = 30;
	this->_rangedDamage = 20;
	this->_armorReduction = 5;
}

FragTrap::FragTrap( std::string const & newName ) : _name( newName ) {

	std::cout << "FR4G-TP " << newName << " has started bootup sequence" << std::endl;

	this->_level = 1;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 100;
	this->_maxEnergyPoints = 100;
	this->_meleeDamage = 30;
	this->_rangedDamage = 20;
	this->_armorReduction = 5;
}

FragTrap::FragTrap( FragTrap const & src ) {

	std::cout << "FR4G-TP " << src._name << " has been copied" << std::endl;
	*this = src;
}

FragTrap &	FragTrap::operator=( FragTrap const & rhs ) {

	std::cout << "FR4G-TP " << this->_name << " has been assigned to " << rhs._name << std::endl;

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

FragTrap::~FragTrap( void ) {

	std::cout << "FR4G-TP " << this->_name << " is down" << std::endl;
}

void 	FragTrap::rangedAttack( const std::string & target ) {

	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " at range, ";
	std::cout  << "causing " << this->_rangedDamage << " points of damage!" << std::endl;
}

void 	FragTrap::meleeAttack( const std::string & target ) {

	if (this->_)
	std::cout << "FR4G-TP " << this->_name << " attacks " << target << " from up close, ";
	std::cout  << "causing " << this->_meleeDamage << " points of damage!" << std::endl;
}