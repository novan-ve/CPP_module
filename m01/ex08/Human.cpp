/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 16:48:44 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 16:48:45 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"
#include <iostream>

void Human::meleeAttack(std::string const & target) {

	std::cout << "meleeAttack performed on " << target << std::endl;
}

void Human::rangedAttack(std::string const & target) {

	std::cout << "rangedAttack performed on " << target << std::endl;
}

void Human::intimidatingShout(std::string const & target) {

	std::cout << "intimidatingShout performed on " << target << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target) {

	std::string	attacks[] = {"meleeAttack", "rangedAttack", "intimidatingShout"};

	typedef void (Human::*Humanfn)(std::string const & target);
	Humanfn		functions[] = { &Human::meleeAttack, &Human::rangedAttack, &Human::intimidatingShout };

	for ( int i = 0; i < 3; i++ ) {
		if (!attacks[i].compare(action_name))
			(this->*functions[i])(target);
	}
}
