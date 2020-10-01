/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 13:47:30 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 13:47:31 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB( std::string inputName ) : _name(inputName) {}

void 	HumanB::setWeapon( Weapon& inputWeapon )
{
	this->_weapon = &inputWeapon;
}

void 	HumanB::attack() const
{
	std::cout << this->_name << " attacks with his " << this->_weapon->getType() << std::endl;
}