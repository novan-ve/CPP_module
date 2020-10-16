/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   FragTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/12 13:25:29 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/12 13:25:30 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include "ClapTrap.hpp"
# include <string>

class FragTrap : public ClapTrap {

public:

	FragTrap( void );
	FragTrap( std::string const & newName );
	FragTrap( FragTrap const & src );
	FragTrap &	operator=( FragTrap const & rhs );
	~FragTrap( void );

	void		rangedAttack( std::string const & target );
	void 		meleeAttack( std::string const & target );

	void 		vaulthunter_dot_exe( std::string const & target );

};

#endif
