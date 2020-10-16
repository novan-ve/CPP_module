/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 13:25:37 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/12 13:25:38 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include <iostream>

int 	main( void ) {


	FragTrap	a( "one" );
	FragTrap	b( "two" );
	FragTrap	c;

	c = b;

	std::cout << std::endl;

	a.meleeAttack( "two" );
	b.takeDamage( 30 );

	a.rangedAttack( "two" );
	b.takeDamage( 20 );

	a.vaulthunter_dot_exe( "two" );
	b.takeDamage( 50 );
	a.vaulthunter_dot_exe( "two" );
	b.takeDamage( 50 );

	b.rangedAttack( "one" );
	b.beRepaired( 50 );
	b.beRepaired( 500 );

	a.vaulthunter_dot_exe( "two" );
	b.takeDamage( 50 );
	a.vaulthunter_dot_exe( "two" );
	b.takeDamage( 50 );
	a.vaulthunter_dot_exe( "two" );

	std::cout << std::endl;


	ScavTrap	d( "three" );

	a.meleeAttack( "three" );
	d.takeDamage( 30 );

	d.meleeAttack( "two" );
	b.takeDamage( 20 );

	d.challengeNewcomer();
	d.challengeNewcomer();

	std::cout << std::endl;

	return 0;
}
