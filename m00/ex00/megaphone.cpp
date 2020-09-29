/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/12 18:49:17 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/12 19:12:46 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int		main( int ac, char **av ) {

	for ( int i = 1; i < ac; i++ )
		for ( size_t j = 0; j < strlen(av[i]); j++)
			std::cout << (char)toupper(av[i][j]);
	if ( ac < 2 )
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	std::cout << std::endl;
	return 0;
}
