/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AssaultTerminator.cpp                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:25:47 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/19 13:25:48 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "AssaultTerminator.hpp"
#include <iostream>

AssaultTerminator::AssaultTerminator() {

	std::cout << "* teleports from space *" << std::endl;
}

AssaultTerminator::AssaultTerminator( AssaultTerminator const & src ) {

	*this = src;

	std::cout << "Assault Terminator has been copied" << std::endl;
}

AssaultTerminator &	AssaultTerminator::operator=( AssaultTerminator const & rhs) {

	(void)rhs;
	std::cout << "Assault Terminator has been assigned" << std::endl;

	return *this;
}

AssaultTerminator::~AssaultTerminator() {

	std::cout << "I'll be back..." << std::endl;
}

ISpaceMarine *		AssaultTerminator::clone() const {

	ISpaceMarine*	tmp = new ( std::nothrow ) AssaultTerminator;

	return tmp;
}

void 				AssaultTerminator::battleCry() const {

	std::cout << "This code is unclean. PURIFY IT!" << std::endl;
}

void 				AssaultTerminator::rangedAttack() const {

	std::cout << "* does nothing *" << std::endl;
}

void 				AssaultTerminator::meleeAttack() const {

	std::cout << "* attacks with chainfists *" << std::endl;
}
