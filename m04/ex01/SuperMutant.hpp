/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperMutant.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:26:16 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:26:17 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

# include "Enemy.hpp"

class SuperMutant : public Enemy {

public:

	SuperMutant();
	SuperMutant( SuperMutant const & src );
	SuperMutant &	operator=( SuperMutant const & rhs );
	~SuperMutant();

	virtual void 	takeDamage( int );

};

#endif
