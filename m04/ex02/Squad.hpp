/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:24:24 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/19 13:24:25 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SQUAD_HPP
# define SQUAD_HPP

# include "ISquad.hpp"

class Squad : public ISquad {

private:

	int 			_nbUnits;
	ISpaceMarine**	_marines;

public:

	Squad();
	Squad( Squad const & src );
	Squad &	operator=( Squad const & rhs );
	~Squad();

	int				getCount() const;
	ISpaceMarine*	getUnit( int ) const;
	int 			push( ISpaceMarine* );

};

#endif
