/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Zombie.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 18:12:47 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/30 18:52:04 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class	Zombie
{
public:

	Zombie();
	~Zombie();

	void		setName( std::string name );
	void		setType( std::string type );
	void		announce() const;

private:

	std::string	_type;
	std::string	_name;

};

#endif
