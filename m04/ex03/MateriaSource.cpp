/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.cpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:04:13 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:04:18 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include <iostream>

MateriaSource::MateriaSource() {

	for ( int i = 0; i < 4; i++ )
		this->_materia[ i ] = NULL;
}

MateriaSource::MateriaSource( MateriaSource const & src ) {

	for ( int i = 0; i < 4; i++ ) {

		if ( src._materia[ i ] ) {

			this->_materia[ i ] = src._materia[ i ]->clone();

			if ( !this->_materia[ i ] ) {

				for ( int j = 0; j < i; j++ ) {

					delete this->_materia[ j ];
					this->_materia[ j ] = NULL;
				}
				std::cout << "Error: clone failed in MateriaSource copy constructor" << std::endl;
				return;
			}
		}
		else
			this->_materia[ i ] = NULL;
	}

	std::cout << "MateriaSource has been copied" << std::endl;
}

MateriaSource &	MateriaSource::operator=( MateriaSource const & rhs ) {

	if ( this != &rhs ) {

		for ( int i = 0; i < 4; i++ ) {

			if ( this->_materia[ i ] )
				delete this->_materia[ i ];
			this->_materia[ i ] = NULL;
		}

		for ( int i = 0; i < 4; i++ ) {

			if ( rhs._materia[ i ] ) {

				this->_materia[ i ] = rhs._materia[ i ]->clone();

				if ( !this->_materia[ i ] ) {

					for ( int j = 0; j < i; j++ ) {

						delete this->_materia[ j ];
						this->_materia[ j ] = NULL;
					}
					std::cout << "Error: clone failed in MateriaSource copy constructor" << std::endl;
					return *this;
				}
			}
			else
				this->_materia[ i ] = NULL;
		}
	}

	std::cout << "MateriaSource has been assigned" << std::endl;

	return *this;
}

MateriaSource::~MateriaSource() {

	for ( int i = 0; i < 4; i++ ) {

		if ( this->_materia[ i ] )
			delete this->_materia[ i ];
	}
}

void 	MateriaSource::learnMateria( AMateria *toLearn ) {

	if ( !toLearn || this->_materia[ 3 ] )
		return;

	for ( int i = 0; i < 4; i++ ) {

		if ( this->_materia[ i ] )
			if ( !this->_materia[ i ]->getType().compare( toLearn->getType() ) )
				return;
	}

	for ( int i = 0; i < 4; i++ ) {

		if ( !this->_materia[ i ] ) {

			this->_materia[ i ] = toLearn->clone();

			if ( !this->_materia[ i ] )
				std::cout << "Error: clone failed in learnMateria function" << std::endl;
			break;
		}
	}
}

AMateria* 		MateriaSource::createMateria( std::string const & type ) {

	for ( int i = 0; i < 4; i++ ) {

		if ( this->_materia[ i ] )
			if ( !this->_materia[ i ]->getType().compare( type ) ) {

				AMateria	*tmp = this->_materia[ i ]->clone();

				if ( !tmp ) {

					std::cout << "Error: clone failed in createMateria function" << std::endl;
					return NULL;
				}
				return tmp;
			}
	}
	return NULL;
}
