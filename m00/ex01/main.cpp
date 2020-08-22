/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/08/16 15:23:55 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/08/16 15:26:40 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int		main() {

	std::string	input;
	while ( true )
	{
		std::getline(std::cin, input);
		if (!input.compare("EXIT"))
			break;
		else if (!input.compare("SEARCH"))
			std::cout << "Started searching" << std::endl;
		else if (!input.compare("ADD"))
			std::cout << "Started adding" << std::endl;
	}
	return 0;
}
