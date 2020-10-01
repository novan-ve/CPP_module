/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 13:46:48 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 13:46:49 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon( std::string weapon ) : _type(weapon) {}

std::string const &	Weapon::getType() const
{
	return this->_type;
}

void 				Weapon::setType( std::string newType )
{
	this->_type = newType;
}