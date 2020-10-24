/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:04:07 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:04:08 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource {

private:

	AMateria*	_materia[ 4 ];

public:

	MateriaSource();
	MateriaSource( MateriaSource const & src );
	MateriaSource &	operator=( MateriaSource const & rhs );
	~MateriaSource();

	void		learnMateria( AMateria* );
	AMateria*	createMateria( std::string const & type );

};

#endif
