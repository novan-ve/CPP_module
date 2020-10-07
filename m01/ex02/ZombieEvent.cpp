/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 18:12:34 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/03 13:11:25 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieEvent.hpp"
#include <string>
#include <sys/time.h>

void 		ZombieEvent::setZombieType( std::string newType )
{
	this->_type = newType;
}

Zombie*		ZombieEvent::newZombie( std::string name )
{
	Zombie*		undead = new Zombie();

	undead->setName( name );
	undead->setType( this->_type );

	return (undead);
}

Zombie* 	ZombieEvent::randomChump()
{
	std::string		vowel = "aeiouy";
	std::string 	consonant = "bcdfghjklmnpqrstvwxz";
	std::string 	randomName;
	timeval			t;

	gettimeofday( &t, NULL );
	srand( t.tv_usec );
	randomName = (char)(consonant[rand() % 20] - 32);
	randomName += (char)(vowel[rand() % 6]);
	randomName += (char)(consonant[rand() % 20]);

	return (ZombieEvent::newZombie( randomName ));
}
