/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:26:16 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/19 13:26:17 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include "TacticalMarine.hpp"
#include "AssaultTerminator.hpp"
#include <iostream>

int main()
{
	// ****************** Subject tests ******************

	ISpaceMarine* bob = new TacticalMarine;
	ISpaceMarine* jim = new AssaultTerminator;

	ISquad* vlc = new Squad;
	vlc->push(bob);
	vlc->push(jim);
	for (int i = 0; i < vlc->getCount(); ++i)
	{
		ISpaceMarine* cur = vlc->getUnit(i);
		cur->battleCry();
		cur->rangedAttack();
		cur->meleeAttack();
	}
	delete vlc;


	// ****************** Own tests ******************

	std::cout << std::endl;

	Squad*			own = new Squad;
	ISpaceMarine*	john = new AssaultTerminator;

	own->push( john->clone() );

	// Wrong values
	own->push( 0 );
	own->push( own->getUnit( 0 ) );

	own->getUnit( 0 )->battleCry();

	// Exists
	std::cout << "Index: " << static_cast< void* >( own->getUnit( 0 ) )		<< std::endl;
	// Doesn't exist
	std::cout << "Index: " << static_cast< void* >( own->getUnit( 1 ) ) 	<< std::endl;
	std::cout << "Index: " << static_cast< void* >( own->getUnit( 500 ) )	<< std::endl;
	std::cout << "Index: " << static_cast< void* >( own->getUnit( -500 ) )	<< std::endl;

	ISpaceMarine*	jimbo = new TacticalMarine;

	std::cout << "Members in Squad: " << own->getCount()	<< std::endl;
	std::cout << "Members in Squad: " << own->push( jimbo ) << std::endl;
	// Wrong values, number of members shouldn't change
	std::cout << "Members in Squad: " << own->push( 0 )		<< std::endl;
	std::cout << "Members in Squad: " << own->push( jimbo ) << std::endl;

	// Deep copy test
	Squad*		own2 = new Squad;

	*own2 = *own;

	delete own;

	own2->getUnit( 1 )->battleCry();

	delete own2;

	return 0;
}
