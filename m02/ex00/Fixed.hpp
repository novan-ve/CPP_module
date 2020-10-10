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

class Fixed {

public:

	Fixed( void );
	Fixed( Fixed const & src );
	~Fixed( void );

	Fixed &		operator=( Fixed const & rhs );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );

private:

	int 				_val;
	static const int 	_frBits;

};

#endif
