/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 15:16:49 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/11 14:10:30 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"
#include <cmath>

Fixed::Fixed( void ) : _val( 0 ) {

//	std::cout << "Default constructor called" << std::endl;

	return;
}

Fixed::Fixed( const int val ) {

//	std::cout << "Int constructor called" << std::endl;

	this->_val = val * ( 1 << this->_frBits );
}

Fixed::Fixed( const float val ) {

//	std::cout << "Float constructor called" << std::endl;

	this->_val = roundf( val * ( 1 << this->_frBits ) );
}

Fixed::Fixed( Fixed const & src ) {

//	std::cout << "Copy constructor called" << std::endl;
	*this = src;

	return;
}

Fixed::~Fixed( void ) {

//	std::cout << "Destructor called" << std::endl;

	return;
}

int		Fixed::getRawBits( void ) const {

	return this->_val;
}

void	Fixed::setRawBits( int const raw ) {

	this->_val = raw;
}

Fixed &		Fixed::operator=( Fixed const & rhs ) {

//	std::cout << "Assignation operator called" << std::endl;

	if ( this != &rhs )
		this->_val = rhs.getRawBits();

	return *this;
}

/* ************************************************************************************** */
/*								Arithmetic operator overloads							  */
/* ************************************************************************************** */

Fixed		Fixed::operator+( Fixed const & rhs ) const {

	return Fixed( this->toFloat() + rhs.toFloat() );
}

Fixed		Fixed::operator-( Fixed const & rhs ) const {

	return Fixed( this->toFloat() - rhs.toFloat() );
}

Fixed		Fixed::operator*( Fixed const & rhs ) const {

	return Fixed( this->toFloat() * rhs.toFloat() );
}

Fixed		Fixed::operator/( Fixed const & rhs ) const {

	return Fixed( this->toFloat() / rhs.toFloat() );
}

/* ************************************************************************************** */
/*							increment/decrement operator overloads						  */
/* ************************************************************************************** */

Fixed		Fixed::operator++( int ) {

	const Fixed old( *this );
	++( *this );
	return old;
}

Fixed		Fixed::operator++( ) {

	_val++;
	return *this;
}

float 		Fixed::toFloat( void ) const {

	return ( static_cast<float>(this->_val) / ( 1 << this->_frBits ) );
}

int 		Fixed::toInt( void ) const {

	return ( this->_val / ( 1 << this->_frBits ) );
}

std::ostream &		operator<<( std::ostream & o, Fixed const & i ) {

	o << i.toFloat();

	return o;
}

const int Fixed::_frBits = 8;
