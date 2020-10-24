/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   AMateria.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:03:01 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:03:02 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_HPP
# define AMATERIA_HPP

# include <string>
# include "ICharacter.hpp"

class ICharacter;

class AMateria {

private:

	AMateria();
	std::string		_type;

protected:

	unsigned int	_xp;

public:

	AMateria( std::string const & type );
	AMateria( AMateria const & src );
	AMateria &	operator=( AMateria const & rhs );
	virtual ~AMateria();

	std::string const &	getType() const;
	unsigned int		getXP() const;
	virtual	AMateria*	clone() const = 0;
	virtual void		use( ICharacter & target );

};

#endif
