/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/05 16:50:19 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/05 16:50:20 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"
#include <iostream>
#include <vector>
#include <deque>
#include <list>

int 	main() {

	// *************** Vector ***************

	std::vector<int>	v;

	v.push_back( 14 );
	v.push_back( 35 );
	v.push_back( 42 );

	// Found
	std::cout << ( easyfind( v, 35 ) ? "Found" : "Not found" ) << std::endl;
	// Not found
	std::cout << ( easyfind( v, 36 ) ? "Found" : "Not found" ) << std::endl;

	// *************** List ***************

	std::list<int>		lst;

	lst.push_back( 14 );
	lst.push_back( 35 );
	lst.push_back( 42 );

	// Found
	std::cout << ( easyfind( lst, 35 ) ? "Found" : "Not found" ) << std::endl;
	// Not found
	std::cout << ( easyfind( lst, 36 ) ? "Found" : "Not found" ) << std::endl;

	// *************** Deque ***************

	std::deque<int>		deq;

	deq.push_back( 14 );
	deq.push_back( 35 );
	deq.push_back( 42 );

	// Found
	std::cout << ( easyfind( deq, 35 ) ? "Found" : "Not found" ) << std::endl;
	// Not found
	std::cout << ( easyfind( deq, 36 ) ? "Found" : "Not found" ) << std::endl;

	return 0;
}
