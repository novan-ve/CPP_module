/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Character.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:03:44 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:03:45 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

# include "ICharacter.hpp"

class Character : public ICharacter {

private:

	Character();

	AMateria**	_slots;
	int 		_used;
	std::string _name;

public:

	Character( std::string const & name );
	Character( const Character & src );
	Character &	operator=( const Character & rhs );
	~Character();

	std::string const &	getName() const;
	void 				equip( AMateria* m );
	void 				unequip( int idx );
	void 				use( int idx, ICharacter & target );

};

#endif
