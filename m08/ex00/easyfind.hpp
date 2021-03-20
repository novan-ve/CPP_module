/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 16:50:14 by novan-ve      #+#    #+#                 */
/*   Updated: 2021/03/20 12:35:26 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <algorithm>

template< typename T >
bool	easyfind( const T & stuff, int nb ) {
	return ( std::find( stuff.begin(), stuff.end(), nb ) != stuff.end() );
}
