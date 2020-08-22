/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   megaphone.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/16 13:20:25 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/08/16 14:52:29 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstring>

int		main( int ac, char **av ) {

	if ( ac < 2 )
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	for (int i = 1; i < ac; i++)
		for (int j = 0; j < strlen(av[i]); j++)
			std::cout << (char)toupper(av[i][j]);
	std::cout << std::endl;
	return 0;
}
