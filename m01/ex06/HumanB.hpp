/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanB.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 13:47:26 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 13:47:26 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"
# include <string>

class HumanB
{

public:

	HumanB( std::string inputName );

	void 	setWeapon( Weapon& inputWeapon );
	void 	attack() const;

private:

	std::string _name;
	Weapon*		_weapon;
};

#endif