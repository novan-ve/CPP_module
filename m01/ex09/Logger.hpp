/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 17:27:09 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 17:27:11 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef LOGGER_HPP
# define LOGGER_HPP

# include <iostream>
# include <string>

class Logger {

public:

	Logger( std::string filename );

	void log( std::string const & dest, std::string const & message );

private:

	std::string		_file;
	void 			_logToConsole( std::string str );
	void 			_logToFile( std::string str );
	std::string		_makeLogEntry( std::string msg );

};

#endif