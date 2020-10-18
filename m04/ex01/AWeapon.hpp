/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AWeapon.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:25:03 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:25:04 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AWEAPON_HPP
# define AWEAPON_HPP

# include <string>

class AWeapon {

private:

	AWeapon();

protected:

	std::string 	_name;
	int 			_apcost;
	int 			_damage;

public:

	AWeapon( std::string const & name, int apcost, int damage );
	AWeapon( AWeapon const & src );
	AWeapon &	operator=( AWeapon const & rhs );
	~AWeapon();

	std::string 	getName() const;
	int 			getAPCost() const;
	int 			getDamage() const;

	virtual void 	attack() const = 0;

};

#endif
