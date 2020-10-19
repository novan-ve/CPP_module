/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Squad.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/19 13:24:30 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/19 13:24:31 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Squad.hpp"
#include <iostream>

Squad::Squad() : _nbUnits( 0 ), _marines( 0 ) {}

Squad::~Squad() {

	for ( int i = this->_nbUnits; i > 0; i-- )
		delete this->_marines[ i - 1 ];

	delete [] this->_marines;
}

Squad::Squad( Squad const & src ) {

	this->_nbUnits = src.getCount();
	this->_marines = new ( std::nothrow ) ISpaceMarine*[ this->_nbUnits ];

	if ( !this->_marines ) {

		std::cout << "Error: allocation failed in Squad copy constructor" << std::endl;
		this->_nbUnits = 0;
		return ;
	}

	for ( int i = 0; i < this->_nbUnits; i++ ) {

		this->_marines[ i ] = src.getUnit( i )->clone();

		if ( !this->_marines[ i ] ) {

			std::cout << "Error: clone failed in Squad copy constructor" << std::endl;

			for ( int j = i - 1; j >= 0; j-- )
				delete this->_marines[ j ];
			delete [] this->_marines;
			this->_marines = 0;
			this->_nbUnits = 0;
			return ;
		}
	}
}

Squad &	Squad::operator=( Squad const & rhs ) {

	while ( this->_nbUnits > 0 ) {

		delete this->_marines[ this->_nbUnits - 1];
		this->_nbUnits--;
	}
	delete [] this->_marines;

	this->_nbUnits = rhs.getCount();
	this->_marines = new ( std::nothrow ) ISpaceMarine*[ this->_nbUnits ];

	if ( !this->_marines ) {

		std::cout << "Error: allocation failed in Squad assignment" << std::endl;
		this->_nbUnits = 0;
		return *this;
	}

	for ( int i = 0; i < this->_nbUnits; i++ ) {

		this->_marines[ i ] = rhs.getUnit( i )->clone();

		if ( !this->_marines ) {

			std::cout << "Error: clone failed in Squad Assignment" << std::endl;

			for ( int j = i - 1; j >= 0; j-- )
				delete this->_marines[ j ];
			delete [] this->_marines;
			this->_marines = 0;
			this->_nbUnits = 0;
			return *this;
		}
	}
	return *this;
}

int 	Squad::getCount() const {

	return this->_nbUnits;
}

ISpaceMarine*	Squad::getUnit( int N ) const {

	if ( N < 0 || N >= this->_nbUnits )
		return 0;
	return this->_marines[ N ];
}

int 			Squad::push( ISpaceMarine* newOne ) {

	if ( !newOne )
		return this->_nbUnits;

	for ( int i = 0; i < this->_nbUnits; i++ ) {

		if ( this->_marines[ i ] == newOne )
			return this->_nbUnits;
	}

	ISpaceMarine** tmp = new ( std::nothrow ) ISpaceMarine*[ this->_nbUnits + 1 ];

	if ( !tmp ) {

		std::cout << "Error: allocation failed in Squad::push" << std::endl;
		return this->_nbUnits;
	}

	for ( int i = 0; i < this->_nbUnits; i++ )
		tmp[ i ] = this->_marines[ i ];

	tmp[ this->_nbUnits ] = newOne;
	delete [] this->_marines;
	this->_marines = tmp;
	this->_nbUnits++;

	return this->_nbUnits;
}
