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
#include "SuperMutant.hpp"
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

	RadScorpion		*radOne = new RadScorpion();

	std::cout << "Trying to attack unarmed:" << std::endl;
	two.attack( radOne );
	std::cout << "Attack does nothing ^" << std::endl;
	std::cout << "Trying to attack NULL:" << std::endl;
	two.attack( NULL );
	std::cout << "Attack does nothing ^" << std::endl;

	// Coplien tests
	std::cout << std::endl << "Coplien tests" << std::endl;
	one.attack( radOne );

	std::cout << "radOne health: " << radOne->getHP() << std::endl;

	RadScorpion		*radTwo = new RadScorpion( *radOne );
	RadScorpion		*radThree = new RadScorpion();
	*radThree = *radOne;

	delete radOne;

	std::cout << "radTwo health: " << radTwo->getHP() << std::endl;
	std::cout << "radThree health: " << radThree->getHP() << std::endl;

	delete radTwo;
	delete radThree;

	std::cout << std::endl;

	SuperMutant		*mutOne = new SuperMutant;

	one.attack( mutOne );

	std::cout << "mutOne health: " << mutOne->getHP() << std::endl;

	SuperMutant		*mutTwo = new SuperMutant( *mutOne );
	SuperMutant		*mutThree = new SuperMutant();
	*mutThree = *mutTwo;

	delete mutOne;

	std::cout << "mutTwo health: " << mutTwo->getHP() << std::endl;
	std::cout << "mutThree health: " << mutThree->getHP() << std::endl;

	delete mutTwo;
	delete mutThree;

	return 0;
}
