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

#include "ScavTrap.hpp"
#include <iostream>
#include <sys/time.h>

ScavTrap::ScavTrap( void ) {

	std::cout << "SC4F-TP Anonymous has blocked the entrance" << std::endl;

	this->_name = "Anonymous";
	this->_level = 1;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeDamage = 20;
	this->_rangedDamage = 15;
	this->_armorReduction = 3;
}

ScavTrap::ScavTrap( std::string const & newName ) : ClapTrap( newName ) {

	std::cout << "SC4F-TP " << newName << " has blocked the entrance" << std::endl;

	this->_level = 1;
	this->_hitPoints = 100;
	this->_maxHitPoints = 100;
	this->_energyPoints = 50;
	this->_maxEnergyPoints = 50;
	this->_meleeDamage = 20;
	this->_rangedDamage = 15;
	this->_armorReduction = 3;
}

ScavTrap::ScavTrap( ScavTrap const & src ) {

	std::cout << "SC4F-TP " << src._name << " has been copied" << std::endl;
	*this = src;
}

ScavTrap &	ScavTrap::operator=( ScavTrap const & rhs ) {

	std::cout << "SC4F-TP " << this->_name << " has been assigned to " << rhs._name << std::endl;

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

ScavTrap::~ScavTrap( void ) {

	std::cout << "SC4F-TP " << this->_name << " unblocks the entrance" << std::endl;
}

void 	ScavTrap::rangedAttack( const std::string & target ) {

	if ( this->_hitPoints == 0 )
		std::cout << "SC4F-TP " << this->_name << " has no HP left" << std::endl;
	else {

		std::cout << "SC4F-TP " << this->_name << " attacks " << target << " at range, ";
		std::cout << "causing " << this->_rangedDamage << " points of damage!" << std::endl;
	}
}

void 	ScavTrap::meleeAttack( const std::string & target ) {

	if ( this->_hitPoints == 0 )
		std::cout << "SC4F-TP " << this->_name << " has no HP left" << std::endl;
	else {

		std::cout << "SC4F-TP " << this->_name << " attacks " << target << " from up close, ";
		std::cout << "causing " << this->_meleeDamage << " points of damage!" << std::endl;
	}
}

void 	ScavTrap::challengeNewcomer( void ) const {

	timeval		t;
	std::string challenges[] = { "You versus me! Me versus you! Either way!",
							  "Dance battle! Or, you know... regular battle.",
							  "Man versus machine! Very tiny streamlined machine!",
							  "You wanna fight with me?! Put 'em up!.. Put 'em up?",
							  "Care to have a friendly duel?"};

	gettimeofday( &t, NULL );
	srand( t.tv_usec );

	std::cout << "SC4F-TP " << this->_name << " challenges you: " << challenges[rand() % 5] << std::endl;
}
