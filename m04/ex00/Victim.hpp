/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Victim.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 13:56:57 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/16 13:56:58 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef VICTIM_HPP
# define VICTIM_HPP

# include <string>

class Victim {

public:

	Victim( std::string const & name );
	Victim( Victim const & src );
	Victim &	operator=( Victim const & rhs );
	virtual		~Victim();

	std::string		getName() const;
	void 			setName( std::string name );

	virtual void	getPolymorphed() const;

private:

	std::string	_name;

};

std::ostream &	operator<<( std::ostream & o, Victim const & i );

#endif
