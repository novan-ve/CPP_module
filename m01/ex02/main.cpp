#include "ZombieEvent.hpp"

int main()
{
	ZombieEvent Apocalypse;
	Zombie		stackZombie( "Will", "cool" );
	Zombie*		heapZombie;

	Apocalypse.setZombieType( "chill" );
	heapZombie = Apocalypse.randomChump();

	stackZombie.announce();
	heapZombie->announce();

	delete heapZombie;

	return 0;
}