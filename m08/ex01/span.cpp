/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   span.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 12:50:04 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/06 12:50:04 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"

Span::Span( unsigned int N ) : _N( N ) {}

Span::Span( const Span & src ) {

	*this = src;
}

Span &	Span::operator=( const Span & rhs ) {

	if ( this != &rhs ) {

		this->_lst = rhs._lst;
		this->_N = rhs._N;
	}

	return *this;
}

Span::~Span() {}

void 	Span::addNumber( int n ) {

	if ( this->_lst.size() >= this->_N )
		throw std::exception();
	this->_lst.push_back( n );
}

int 	Span::shortestSpan() {

	if ( this->_lst.size() < 2 )
		throw std::exception();

	this->_lst.unique();
	this->_lst.sort();

	std::list<int>::iterator 	min;
	std::list<int>::iterator 	max;

	max = std::min_element( this->_lst.begin(), this->_lst.end() );
	min = max;
	++max;

	return *max - *min;
}

int 	Span::longestSpan() {

	if ( this->_lst.size() < 2 )
		throw std::exception();

	this->_lst.unique();
	this->_lst.sort();

	std::list<int>::iterator 	min;
	std::list<int>::iterator 	max;

	min = std::min_element( this->_lst.begin(), this->_lst.end() );
	max = std::max_element( this->_lst.begin(), this->_lst.end() );

	return *max - *min;
}
