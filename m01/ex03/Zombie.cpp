/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 18:12:26 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/30 18:52:58 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie() {}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << ':' << this->_type << " has perished" << std::endl;
}

void 	Zombie::announce() const
{
	std::cout << '<' << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}

void	Zombie::setName( std::string name )
{
	this->_name = name;
}

void	Zombie::setType( std::string type )
{
	this->_type = type;
}
