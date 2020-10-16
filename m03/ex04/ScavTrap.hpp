/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ScavTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 13:25:29 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/12 13:25:30 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class ScavTrap : public ClapTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string const & newName );
	ScavTrap( ScavTrap const & src );
	ScavTrap &	operator=( ScavTrap const & rhs );
	~ScavTrap( void );

	void		rangedAttack( std::string const & target );
	void 		meleeAttack( std::string const & target );

	void 		challengeNewcomer( void ) const;

};

#endif
