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

# include <string>

class ScavTrap {

public:

	ScavTrap( void );
	ScavTrap( std::string const & newName );
	ScavTrap( ScavTrap const & src );
	ScavTrap &	operator=( ScavTrap const & rhs );
	~ScavTrap( void );

	void		rangedAttack( std::string const & target );
	void 		meleeAttack( std::string const & target );
	void 		takeDamage( unsigned int amount );
	void 		beRepaired( unsigned int amount );
	void 		challengeNewcomer( void ) const;

private:

	std::string		_name;
	unsigned int	_level;
	unsigned int	_hitPoints;
	unsigned int	_maxHitPoints;
	unsigned int	_energyPoints;
	unsigned int	_maxEnergyPoints;
	unsigned int	_meleeDamage;
	unsigned int	_rangedDamage;
	unsigned int	_armorReduction;

};

#endif
