/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   SuperTrap.hpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/15 16:21:13 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/15 16:21:14 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SUPERTRAP_HPP
# define SUPERTRAP_HPP

# include "NinjaTrap.hpp"
# include "FragTrap.hpp"
# include <string>

class SuperTrap : public FragTrap, public NinjaTrap {

public:

	SuperTrap( void );
	SuperTrap( std::string const & newName );
	SuperTrap( SuperTrap const & src );
	SuperTrap &	operator=( SuperTrap const & rhs );
	~SuperTrap( void );

	void		rangedAttack( std::string const & target );
	void 		meleeAttack( std::string const & target );

};

#endif