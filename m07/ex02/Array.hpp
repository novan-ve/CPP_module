/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Array.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 14:04:18 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/05 14:04:19 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <exception>

template< typename T >
class Array {

public:

	Array() : _arr( 0 ), _size( 0 ) {}

	Array( unsigned int n ) : _arr( 0 ), _size( n ) {

		if ( n <= 0 )
			throw std::exception();
		this->_arr = new T [n];
	}

	Array( const Array & src ) : _arr( 0 ), _size( src._size) {

		if ( src._size ) {

			this->_arr = new T [this->_size];
			for ( unsigned int i = 0; i < src._size; i++ )
				this->_arr[i] = src._arr[i];
		}
	}

	Array &	operator=( const Array & rhs ) {

		if ( this == &rhs )
			return *this;

		if ( this->_size )
			delete [] this->_arr;

		this->_arr = 0;
		this->_size = rhs._size;

		if ( !rhs._size )
			return *this;

		this->_arr = new T [this->_size];
		for ( unsigned int i = 0; i < rhs._size; i++ )
			this->_arr[i] = rhs._arr[i];
		return *this;
	}

	~Array() {

		if ( this->_size )
			delete [] this->_arr;
	}

	unsigned int 	size() const {
		return this->_size;
	}

	T &		operator[]( unsigned int n ) {

		if ( n >= 0 && n < this->_size )
			return this->_arr[n];
		else
			throw std::exception();
	}

private:

	T *				_arr;
	unsigned int 	_size;

};
