/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:03:15 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:03:17 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ICE_HPP
# define ICE_HPP

# include "AMateria.hpp"

class Ice : public AMateria {

public:

	Ice();
	Ice( Ice const & src );
	Ice &	operator=( Ice const & rhs );
	~Ice();

	AMateria*	clone() const;
	void 		use( ICharacter & target );

};

#endif
