/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Sorcerer.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/16 13:56:38 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/16 13:56:38 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SORCERER_HPP
# define SORCERER_HPP

# include "Victim.hpp"
# include <string>

class Sorcerer {

public:

	Sorcerer( std::string const & name, std::string const & title );
	Sorcerer( Sorcerer const & );
	Sorcerer & operator=( Sorcerer const & );
	~Sorcerer();

	std::string getName() const;
	std::string getTitle() const;

	void	polymorph( Victim const & ) const;

private:

	std::string _name;
	std::string _title;

	Sorcerer();

};

std::ostream &		operator<<( std::ostream & o, Sorcerer const & i );

#endif
