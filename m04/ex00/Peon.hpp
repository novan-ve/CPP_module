/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Peon.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 13:57:11 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/16 13:57:12 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PEON_HPP
# define PEON_HPP

# include "Victim.hpp"
# include <string>

class Peon : public Victim {

public:

	Peon( std::string const & name );
	Peon( Peon const & src );
	Peon &	operator=( Peon const & rhs );
	~Peon();

	void 		getPolymorphed() const;

private:

	Peon();

};

std::ostream &	operator<<( std::ostream & o, Peon const & i );

#endif
