/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 18:10:35 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/03 13:12:26 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent Apocalypse;
	Zombie		stackZombie;
	Zombie*		heapZombie;
	Zombie*		randomHeapZombie;

	stackZombie.setName( "Will" );
	stackZombie.setType( "cool" );

	Apocalypse.setZombieType( "nice" );
	heapZombie = Apocalypse.newZombie( "Ben" );

	Apocalypse.setZombieType( "chill" );
	randomHeapZombie = Apocalypse.randomChump();

	stackZombie.announce();
	heapZombie->announce();
	randomHeapZombie->announce();

	delete heapZombie;
	delete randomHeapZombie;

	return 0;
}
