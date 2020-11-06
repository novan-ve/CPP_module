/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 12:49:59 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/06 12:50:00 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <list>

class Span {

private:

	Span();
	std::list<int>	_lst;
	unsigned int 	_N;

public:

	Span( unsigned int N );
	Span( const Span & src );
	Span &	operator=( const Span & rhs );
	virtual ~Span();

	void 	addNumber( int n );

	template< typename T >
	void 	addNumber( T first, T last ) {

		if ( std::distance( first, last ) + this->_lst.size() > this->_N)
			throw std::exception();

		_lst.insert( this->_lst.end(), first, last );
	}

	int 	shortestSpan();
	int 	longestSpan();

};
