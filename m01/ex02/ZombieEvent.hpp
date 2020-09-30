#ifndef ZOMBIEEVENT_HPP
# define ZOMBIEEVENT_HPP

# include "Zombie.hpp"
# include <string>

class	ZombieEvent
{

public:

	Zombie*		newZombie( std::string name );
	void 		setZombieType( std::string newType );
	Zombie* 	randomChump();

private:

	std::string _type;

};

#endif