/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 09:26:23 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/04 12:37:21 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"
#include <iostream>

int 	main( int ac, char **av ) {

	if ( ac == 1 ) {
		std::cout << "Error: one argument required" << std::endl;
		return 0;
	}
	if ( ac != 2 ) {
		std::cout << "Error: too much arguments" << std::endl;
		return 0;
	}

	std::string     arg( av[1] );
	Convert			conv( arg );

	try {
		char c = conv.toChar();
		std::cout << "char: '" << c << "'" << std::endl;
	}
	catch ( const char *s ) {
		std::cout << "char: " << s << std::endl;
	}

	try {
		int i = conv.toInt();
		std::cout << "Int: " << i << std::endl;
	}
	catch ( const char *s ) {
		std::cout << "Int: " << s << std::endl;
	}

	try {
		float f = conv.toFloat();

		std::cout << "Float: " << f;
		if ( ( arg[arg.length() - 2] == '.' && arg[arg.length() - 1] == '0' ) || arg.find( '.' ) == std::string::npos )
			std::cout << ".0";
		else if ( arg[arg.length() - 1] == 'f' && arg[arg.length() - 2] == '0' && arg[arg.length() - 3] == '.' )
			std::cout << ".0";
		std::cout << "f" << std::endl;
	}
	catch ( const char *s ) {
		std::cout << "Float: " << s << std::endl;
	}

	try {
		double d = conv.toDouble();

		std::cout << "Double: " << d;
		if ( ( arg[arg.length() - 2] == '.' && arg[arg.length() - 1] == '0') || arg.find( '.' ) == std::string::npos )
			std::cout << ".0";
		else if ( arg[arg.length() - 1] == 'f' && arg[arg.length() - 2] == '0' && arg[arg.length() - 3] == '.' )
			std::cout << ".0";
		std::cout << std::endl;
	}
	catch ( const char *s ) {
		std::cout << "Double: " << s << std::endl;
	}

	system("leaks a.out");

	return 0;
}
