/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 15:16:49 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/10 15:16:51 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <iostream>

Fixed::Fixed( void ) : _val( 0 ) {

	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( Fixed const & src ) {

	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed( void ) {

	std::cout << "Destructor called" << std::endl;

	return;
}

int		Fixed::getRawBits( void ) const {

	std::cout << "getRawBits member function called" << std::endl;

	return this->_val;
}

void	Fixed::setRawBits( int const raw ) {

	this->_val = raw;
}

Fixed &		Fixed::operator=( Fixed const & rhs ) {

	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->_val = rhs.getRawBits();

	return *this;
}

const int Fixed::_frBits = 8;
