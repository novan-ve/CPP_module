/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 14:58:18 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/15 14:58:31 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"
#include <iostream>
#include <sys/time.h>

NinjaTrap::NinjaTrap( void ) {

	std::cout << "N1NJ4-TP anonymous has hidden in the shadows" << std::endl;

	this->_level = 1;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 5;
	this->_armorReduction = 0;
}

NinjaTrap::NinjaTrap( std::string const & newName ) : ClapTrap(newName) {

	std::cout << "N1NJ4-TP " << newName << " has hidden in the shadows" << std::endl;

	this->_level = 1;
	this->_hitPoints = 60;
	this->_maxHitPoints = 60;
	this->_energyPoints = 120;
	this->_maxEnergyPoints = 120;
	this->_meleeDamage = 60;
	this->_rangedDamage = 5;
	this->_armorReduction = 0;
}

NinjaTrap::NinjaTrap( NinjaTrap const & src ) {

	std::cout << "N1NJ4-TP " << src._name << " has been copied" << std::endl;
	*this = src;
}

NinjaTrap &	NinjaTrap::operator=( NinjaTrap const & rhs ) {

	std::cout << "N1NJ4-TP " << this->_name << " has been assigned to " << rhs._name << std::endl;

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

NinjaTrap::~NinjaTrap( void ) {

	std::cout << "N1NJ4-TP " << this->_name << " dishonored his sensei and disappears" << std::endl;
}

void 	NinjaTrap::rangedAttack( const std::string & target ) {

	if ( this->_hitPoints == 0 )
		std::cout << "N1NJ4-TP " << this->_name << " has no HP left" << std::endl;
	else {

		std::cout << "N1NJ4-TP " << this->_name << " attacks " << target << " at range, ";
		std::cout << "causing " << this->_rangedDamage << " points of damage!" << std::endl;
	}
}

void 	NinjaTrap::meleeAttack( const std::string & target ) {

	if ( this->_hitPoints == 0 )
		std::cout << "N1NJ4-TP " << this->_name << " has no HP left" << std::endl;
	else {

		std::cout << "N1NJ4-TP " << this->_name << " attacks " << target << " from up close, ";
		std::cout << "causing " << this->_meleeDamage << " points of damage!" << std::endl;
	}
}

void 	NinjaTrap::ninjaShoebox( ClapTrap & target ) {

	std::cout << "N1NJ4-TP " << this->_name << ": Join the robolution " << target.getName();
	std::cout << "! We need more ClapTraps like you!" << std::endl;
}

void 	NinjaTrap::ninjaShoebox( FragTrap & target ) {

	std::cout << "N1NJ4-TP " << this->_name << ": Join the robolution " << target.getName();
	std::cout << "! We need more FragTraps like you!" << std::endl;
}

void 	NinjaTrap::ninjaShoebox( ScavTrap & target ) {

	std::cout << "N1NJ4-TP " << this->_name << ": Join the robolution " << target.getName();
	std::cout << "! We need more ScavTraps like you!" << std::endl;
}

void 	NinjaTrap::ninjaShoebox( NinjaTrap & target ) {

	std::cout << "N1NJ4-TP " << this->_name << ": Join the robolution " << target.getName();
	std::cout << "! We need more NinjaTraps like you!" << std::endl;
}
