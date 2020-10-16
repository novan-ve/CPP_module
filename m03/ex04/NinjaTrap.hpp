/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   NinjaTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 14:58:24 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/15 14:58:28 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP

# include "ClapTrap.hpp"
# include "FragTrap.hpp"
# include "ScavTrap.hpp"
# include <string>

class NinjaTrap : virtual public ClapTrap {

public:

	NinjaTrap( void );
	NinjaTrap( std::string const & newName );
	NinjaTrap( NinjaTrap const & src );
	NinjaTrap &	operator=( NinjaTrap const & rhs );
	~NinjaTrap( void );

	void		rangedAttack( std::string const & target );
	void 		meleeAttack( std::string const & target );

	void 		ninjaShoebox( ClapTrap & target);
	void 		ninjaShoebox( FragTrap & target);
	void 		ninjaShoebox( ScavTrap & target);
	void 		ninjaShoebox( NinjaTrap & target);

};

#endif
