/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 15:27:44 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 15:27:46 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int 	main( int ac, char **av )
{
	if (ac != 4)
	{
		std::cout << "usage:" << std::endl;
		std::cout << "./replace FILENAME STRING REPLACEMENT" << std::endl;
		return 0;
	}

	std::string 	file = av[1];
	std::string 	toReplace = av[2];
	std::string 	toReplaceWith = av[3];
	std::string 	line;

	if ( !toReplace.length() )
	{
		std::cout << "Error: can't replace nothing" << std::endl;
		return 0;
	}

	std::ifstream	oldFile( file );

	if ( !oldFile.good() )
	{
		std::cout << "Error: invalid filename" << std::endl;
		oldFile.close();
		return 0;
	}

	std::ofstream 	newFile( file + ".replace" );

	size_t 			pos;

	if ( newFile.good() )
	{
		while ( getline( oldFile, line ) )
		{
			while ( true )
			{
				pos = line.find( toReplace );
				if ( pos != std::string::npos )
					line.replace( pos, toReplace.length(), toReplaceWith );
				else
					break;
			}
			newFile << line;
			newFile << std::endl;
		}
	}
	else
		std::cout << "Error failed creating " << file << ".replace" << std::endl;

	oldFile.close();
	newFile.close();

	return 0;
}