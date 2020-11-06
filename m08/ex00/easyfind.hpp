/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 16:50:14 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/05 16:50:15 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

template< typename T >
bool	easyfind( const T & stuff, int nb ) {
	return ( std::find( stuff.begin(), stuff.end(), nb ) != stuff.end() );
}
