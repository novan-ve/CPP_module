/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/03 15:50:01 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/03 15:50:02 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>

int 	main(int ac, char **av) {

	std::string 	line;

	if (ac == 1)
	{
		while ( getline(std::cin, line) ) {
			std::cout << line << std::endl;
		}
	}
	if (ac > 1)
	{
		for ( int i = 1; i < ac; i++ ) {
			std::ifstream	ifs(av[i]);
			while ( getline( ifs, line ) )
				std::cout << line << std::endl;
			ifs.close();
		}
	}

	return 0;
}