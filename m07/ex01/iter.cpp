/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   iter.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 13:20:41 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/05 13:20:42 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template< typename T >
void 	printer( const T & par ) {
	std::cout << par << std::endl;
}

template< typename T >
void	iter( T * arr, size_t len, void (*f)(const T & par) ) {

	for ( size_t i = 0; i < len; i++ )
		f( arr[i] );
}

int 	main() {

	std::string one[] = { "Hello", "World" };
	int 		two[] = { 1, 3, 5 };
	float 		three[] = { 4.2f, 1.3f, 3.1f, 5.6f, 9.4f };

	iter( one, 2, printer );
	iter( two, 3, printer );
	iter( three, 5, printer );

	return 0;
}
