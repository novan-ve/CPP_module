/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Weapon.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 13:46:53 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 13:46:54 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_HPP
# define WEAPON_HPP

# include <string>

class Weapon
{

public:

	Weapon( std::string weapon );

	std::string const&	getType() const;
	void				setType( std::string newType );

private:

	std::string	_type;

};

#endif