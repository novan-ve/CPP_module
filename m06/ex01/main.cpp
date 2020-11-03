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
#include <stdlib.h>
#include <iostream>

void *	serialize( void ) {

	Data			*tmp = new Data();
	std::string 	alpha = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789";

	srand( time( NULL ) );

	for ( int i = 0; i < 8; i++ ) {
		tmp->s1.push_back( alpha[ rand() % 62 ] );
		tmp->s2.push_back( alpha[ rand() % 62 ] );
	}

	tmp->n = rand();

//	std::cout << "Before serialization:" << std::endl;
//	std::cout << "s1: \t" << tmp->s1 << std::endl;
//	std::cout << "n: \t" << tmp->n << std::endl;
//	std::cout << "s2: \t" << tmp->s2 << std::endl << std::endl;

	return reinterpret_cast< void * >( tmp );
}

Data *	deserialize( void * raw ) {

	Data *	data;
	Data *	ret = new Data();

	data = reinterpret_cast< Data * >( raw );

	ret->s1 = data->s1;
	ret->n = data->n;
	ret->s2 = data->s2;

	return ret;
}

int 	main() {

	void *	raw = serialize();
	Data *	data = deserialize( raw );

	std::cout << "After deserialization:" << std::endl;
	std::cout << "s1: \t" << data->s1 << std::endl;
	std::cout << "n: \t" << data->n << std::endl;
	std::cout << "s2: \t" << data->s2 << std::endl;

	delete reinterpret_cast< Data * >( raw );
	delete data;

	return 0;
}
