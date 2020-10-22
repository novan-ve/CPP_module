/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:26:56 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:26:59 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "AWeapon.hpp"
# include "Enemy.hpp"
# include <string>

class Character {

private:

	Character();

	int 		_ap;
	std::string _name;
	AWeapon*	_weapon;
	Enemy*		_check;

public:

	Character( std::string const & name );
	Character( Character const & src );
	Character &	operator=( Character const & rhs );
	~Character();

	void 	recoverAP();
	void 	equip( AWeapon* );
	void 	attack( Enemy* );

	int 				getAP() const;
	AWeapon *			getWeapon() const;
	std::string const &	getName() const;

};

std::ostream &	operator<<( std::ostream & o, Character const & i );

#endif
