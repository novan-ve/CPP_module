#include "ZombieEvent.hpp"
#include <string>
#include <sys/time.h>

void 		ZombieEvent::setZombieType( std::string newType )
{
	this->_type = newType;
}

Zombie*		ZombieEvent::newZombie( std::string name )
{
	Zombie*		undead = new Zombie( name, this->_type );

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
	randomName = {(char)(consonant[rand() % 20] - 32), vowel[rand() % 6], consonant[rand() % 20]};

	return (ZombieEvent::newZombie( randomName ));
}