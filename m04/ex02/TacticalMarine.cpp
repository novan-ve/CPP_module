/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   TacticalMarine.cpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:25:19 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/19 13:25:20 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "TacticalMarine.hpp"
#include <iostream>

TacticalMarine::TacticalMarine() {

	std::cout << "Tactical Marine ready for battle!" << std::endl;
}

TacticalMarine::TacticalMarine( TacticalMarine const & src ) {

	*this = src;

	std::cout << "Tactical Marine has been copied" << std::endl;
}

TacticalMarine &	TacticalMarine::operator=( TacticalMarine const & rhs) {

	(void)rhs;
	std::cout << "Tactical Marine has been assigned" << std::endl;

	return *this;
}

TacticalMarine::~TacticalMarine() {

	std::cout << "Aaargh..." << std::endl;
}

ISpaceMarine *		TacticalMarine::clone() const {

	ISpaceMarine*	tmp = new ( std::nothrow )TacticalMarine;

	return tmp;
}

void 				TacticalMarine::battleCry() const {

	std::cout << "For the holy PLOT!" << std::endl;
}

void 				TacticalMarine::rangedAttack() const {

	std::cout << "* attacks with a bolter *" << std::endl;
}

void 				TacticalMarine::meleeAttack() const {

	std::cout << "* attacks with a chainsword *" << std::endl;
}

