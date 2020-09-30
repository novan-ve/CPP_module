#include "Zombie.hpp"
#include <iostream>

Zombie::Zombie( std::string name, std::string type ) : _type(type), _name(name) {}

Zombie::~Zombie()
{
	std::cout << "Zombie " << this->_name << ':' << this->_type << " has perished" << std::endl;
}

void 	Zombie::announce() const
{
	std::cout << '<' << this->_name << " (" << this->_type << ")> Braiiiiiiinnnssss..." << std::endl;
}