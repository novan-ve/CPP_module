/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:05:12 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:05:16 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Ice.hpp"
#include "Cure.hpp"
#include "Character.hpp"
#include <iostream>

int main() {

	// ****************** Subject tests ******************

	std::cout << "****************** Subject tests ******************" << std::endl << std::endl;

	IMateriaSource* src = new MateriaSource();
	src->learnMateria(new Ice());
	src->learnMateria(new Cure());

	ICharacter* me = new Character("me");

	AMateria* tmp;
	tmp = src->createMateria("ice");
	me->equip(tmp);
	tmp = src->createMateria("cure");
	me->equip(tmp);

	ICharacter* bob = new Character("bob");

	me->use(0, *bob);
	me->use(1, *bob);

	delete bob;
	delete me;
	delete src;


	// ****************** Own tests ******************

	std::cout << std::endl << "****************** Own tests ******************" << std::endl << std::endl;

	MateriaSource	source;
	Character		joe( "joe" );
	Ice				ice;
	Cure			cure;

	// Are values checked correctly?
	std::cout << "Wrong values check: " << std::endl;

	source.learnMateria( &ice );
	source.learnMateria( &cure );
	source.learnMateria( NULL );

	joe.equip( source.createMateria( "ice" ) );
	joe.equip( source.createMateria( "non Existent" ) );
	joe.equip( source.createMateria( "ice" ) );
	joe.equip( source.createMateria( "cure" ) );
	// Expected: source slot[0] = ice, slot[1] = cure

	Character		jim( joe );
	Character		jimmy( "coplien test" );
	jimmy = joe;

	// Is everything copied correctly?
	joe.use( 0, jim );
	jim.use( 1, jimmy );
	jimmy.use( 1, joe );

	// Is it a deep copy?
	std::cout << std::endl << "Deep copy test: " << std::endl;

	Character		*deep = new Character( "deep_test" );

	deep->equip( source.createMateria( "ice" ) );

	Character		*deep2 = new Character( *deep );
	Character		*deep3 = new Character( "tmp" );
	*deep3 = *deep;

	delete deep;

	deep2->use( 0, *deep3 );
	deep3->use( 0, *deep2 );

	delete deep2;
	delete deep3;

	// MateriaSource coplien test
	std::cout << std::endl << "Coplien tests: " << std::endl;

	MateriaSource	*source1 = new MateriaSource;

	source1->learnMateria( new Ice );
	source1->learnMateria( new Cure );

	MateriaSource	*source2 = new MateriaSource( *source1 );
	MateriaSource	*source3 = new MateriaSource();
	*source3 = *source1;

	delete source1;

	Character	tmp1( "coplien_test2" );

	tmp1.equip( source2->createMateria( "ice" ) );
	tmp1.equip( source2->createMateria( "cure" ) );
	tmp1.use( 0, joe );
	tmp1.use( 1, joe );

	delete source2;
	delete source3;


	// Ice coplien test
	std::cout << std::endl << "Ice coplien tests: " << std::endl;

	Ice		one;

	std::cout << "Ice one XP before attack: " << one.getXP() << std::endl;
	one.use( joe );
	std::cout << "Ice one XP after attack: " << one.getXP() << std::endl;

	Ice		two( one );
	Ice		three;
	three = one;

	std::cout << "Ice two XP: " << two.getXP() << std::endl;
	std::cout << "Ice three XP: " << three.getXP() << std::endl;

	// Cure coplien test
	std::cout << std::endl << "Cure coplien tests: " << std::endl;

	Cure		cureOne;

	std::cout << "Cure one XP before attack: " << cureOne.getXP() << std::endl;
	cureOne.use( joe );
	std::cout << "Cure one XP after attack: " << cureOne.getXP() << std::endl;

	Cure		cureTwo( cureOne );
	Cure		cureThree;
	cureThree = cureOne;

	std::cout << "Cure two XP: " << cureTwo.getXP() << std::endl;
	std::cout << "Cure three XP: " << cureThree.getXP() << std::endl;

	return 0;
}
