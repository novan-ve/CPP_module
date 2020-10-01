/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   HumanA.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 13:47:20 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 13:47:20 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_HPP
# define HUMANA_HPP

# include "Weapon.hpp"
# include <string>

class HumanA
{

public:

	HumanA( std::string inputName, Weapon& inputWeapon );

	void 	attack() const;

private:

	std::string	_name;
	Weapon&		_weapon;

};

#endif