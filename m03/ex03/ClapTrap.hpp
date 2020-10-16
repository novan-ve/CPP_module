/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ClapTrap.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/14 15:32:33 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/14 15:32:35 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

# include <string>

class ClapTrap {

public:

	ClapTrap( void );
	ClapTrap( std::string const & newName );
	ClapTrap( ClapTrap const & src );
	ClapTrap &	operator=( ClapTrap const & rhs );
	~ClapTrap( void );

	void 		takeDamage( unsigned int amount );
	void 		beRepaired( unsigned int amount );

	std::string getName( void );

protected:

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
