/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cure.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:03:36 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:03:38 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CURE_HPP
# define CURE_HPP

# include "AMateria.hpp"

class Cure : public AMateria {

public:

	Cure();
	Cure( Cure const & src );
	Cure &	operator=( Cure const & rhs );
	~Cure();

	AMateria*	clone() const;
	void 		use( ICharacter & target );

};

#endif
