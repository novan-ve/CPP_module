/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/01 09:18:49 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/01 09:18:49 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Serialize.hpp"
#include <iostream>

void *	serialize( void ) {

	Data			*tmp = new Data();
	std::string 	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

	srand( time( NULL ) );

	for ( int i = 0; i < 8; i++ ) {
		tmp->s1->append( alpha[ rand() % 62 ] );
	}

	return NULL;
}

//Data *	deserialize( void * raw ) {


//}

int 	main() {

	serialize();

	return 0;
}