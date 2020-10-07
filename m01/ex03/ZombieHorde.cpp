/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 18:14:57 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/03 13:16:03 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <sys/time.h>
#include <iostream>

ZombieHorde::ZombieHorde( int N ) : _nbZombies(N)
{
	std::string		vowel = "aeiouy";
	std::string 	consonant = "bcdfghjklmnpqrstvwxz";
	std::string		name;
	timeval			t;

	this->_zombies = new Zombie[this->_nbZombies];
	gettimeofday( &t, NULL );
	srand( t.tv_usec );
	for( int i = 0; i < this->_nbZombies; i++ )
	{
		this->_zombies[i].setType( "horde" );
		name = (char)( consonant[rand() % 20] - 32 );
		name += (char)( vowel[rand() % 6] );
		name += (char)(consonant[rand() % 20]);
		this->_zombies[i].setName( name );
	}
}

ZombieHorde::~ZombieHorde()
{
	delete [] this->_zombies;
}

void	ZombieHorde::announce()
{
	for( int i = 0; i < this->_nbZombies; i++ )
		this->_zombies[i].announce();
}
