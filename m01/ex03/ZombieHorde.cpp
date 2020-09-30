/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.cpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 18:14:57 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/30 18:14:58 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ZombieHorde.hpp"
#include <sys/time.h>
#include <iostream>

ZombieHorde::ZombieHorde( int N ) : _nbZombies(N)
{
	std::string		vowel = "aeiouy";
	std::string 	consonant = "bcdfghjklmnpqrstvwxz";
	timeval			t;

	this->_zombies = new Zombie[this->_nbZombies];
	gettimeofday( &t, NULL );
	srand( t.tv_usec );
	for( int i = 0; i < this->_nbZombies; i++ )
	{
		this->_zombies[i].setType( "horde" );
		this->_zombies[i].setName( {(char)(consonant[rand() % 20] - 32), vowel[rand() % 6], consonant[rand() % 20]} );
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