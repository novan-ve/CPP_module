/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Ice.cpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/22 16:03:22 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/22 16:03:23 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"
#include <iostream>

Ice::Ice() : AMateria( "ice" ) {}

Ice::Ice( const Ice & src ) : AMateria( src ) {}

Ice &	Ice::operator=( Ice const & rhs ) {

	
}
