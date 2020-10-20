/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:26:42 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:26:43 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RadScorpion.hpp"
#include <iostream>

RadScorpion::RadScorpion() : Enemy( 80, "RadScorpion" ) {

	std::cout << "* click click click *" << std::endl;
}

RadScorpion::RadScorpion( RadScorpion const & src ) : Enemy( src ) {

	std::cout << "RadScorpion " << src.getType() << " has been copied" << std::endl;
}

RadScorpion &	RadScorpion::operator=( RadScorpion const & rhs ) {

	if ( this != & rhs ) {

		this->_hp = rhs.getHP();
		this->_type = rhs.getType();
	}
	std::cout << "RadScorpion " << rhs.getType() << " has been assigned" << std::endl;

	return *this;
}

RadScorpion::~RadScorpion() {

	std::cout << "* SPROTCH *" << std::endl;
}
