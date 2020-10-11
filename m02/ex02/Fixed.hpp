/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/10 15:16:43 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/10 15:16:44 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {

public:

	Fixed( void );
	Fixed( const int val );
	Fixed( const float val );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed &		operator=( Fixed const & rhs );
	Fixed		operator+( Fixed const & rhs ) const;
	Fixed		operator-( Fixed const & rhs ) const;
	Fixed		operator*( Fixed const & rhs ) const;
	Fixed		operator/( Fixed const & rhs ) const;

	Fixed		operator++( int );
	Fixed		operator++( );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

	float 		toFloat( void ) const;
	int 		toInt( void ) const;

private:

	int 				_val;
	static const int 	_frBits;

};

std::ostream &		operator<<( std::ostream & o, Fixed const & i );

#endif
