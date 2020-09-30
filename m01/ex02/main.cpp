/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 18:10:35 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/30 18:55:18 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent Apocalypse;
	Zombie		stackZombie;
	Zombie*		heapZombie;

	stackZombie.setName( "Will" );
	stackZombie.setType( "cool" );

	Apocalypse.setZombieType( "chill" );
	heapZombie = Apocalypse.randomChump();

	stackZombie.announce();
	heapZombie->announce();

	delete heapZombie;

	return 0;
}
