/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:27:04 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:28:39 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"
#include "RadScorpion.hpp"
#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include <iostream>

int main()
{
	// ****************** Subject tests ******************

	Character* me = new Character("me");

	std::cout << *me;

	Enemy* b = new RadScorpion();

	AWeapon* pr = new PlasmaRifle();
	AWeapon* pf = new PowerFist();

	me->equip(pr);
	std::cout << *me;
	me->equip(pf);

	me->attack(b);
	std::cout << *me;
	me->equip(pr);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;
	me->attack(b);
	std::cout << *me;

	delete pr;
	delete pf;
	delete me;

	// ****************** Own tests ******************

	std::cout << std::endl;

	Character	one( "coplien_test" );
	Character	two( one );
	Character	three( "tmp" );

	three = two;

	std::cout << one << two << three;

	RadScorpion		radOne;

	std::cout << "Trying to attack unarmed" << std::endl;
	two.attack( &radOne );
	std::cout << "Attack does nothing ^" << std::endl;

	PowerFist	pfOne;

	three.equip( &pfOne );
	std::cout << "Killing a stack enemy:" << std::endl;
	three.attack( &radOne );
	three.attack( &radOne );
	std::cout << "End of tests" << std::endl;

	return 0;
}
