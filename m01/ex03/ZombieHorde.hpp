/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ZombieHorde.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 18:15:03 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/30 18:15:04 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

class	ZombieHorde
{
public:

	ZombieHorde( int N );
	~ZombieHorde();

	void	announce();

private:
	Zombie*		_zombies;
	int 		_nbZombies;

};