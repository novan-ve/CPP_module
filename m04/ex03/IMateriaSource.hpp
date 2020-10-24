/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   IMateriaSource.hpp                                 :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:05:06 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:05:07 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_HPP
# define IMATERIASOURCE_HPP

# include "AMateria.hpp"

class IMateriaSource {

public:

	virtual ~IMateriaSource() {}
	virtual void learnMateria( AMateria* ) = 0;
	virtual AMateria* createMateria( std::string const & type ) = 0;

};

#endif
