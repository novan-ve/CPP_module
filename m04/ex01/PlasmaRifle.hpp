/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PlasmaRifle.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:25:11 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:25:12 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PLASMARIFLE_HPP
# define PLASMARIFLE_HPP

# include "AWeapon.hpp"

class PlasmaRifle : public AWeapon {

public:

	PlasmaRifle();
	PlasmaRifle( PlasmaRifle const & src );
	PlasmaRifle &	operator=( PlasmaRifle const & rhs );
	~PlasmaRifle();

	virtual void 	attack() const;

};

#endif
