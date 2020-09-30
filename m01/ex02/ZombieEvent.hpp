/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieEvent.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 18:12:40 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/30 18:12:42 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

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
