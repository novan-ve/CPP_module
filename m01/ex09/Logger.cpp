/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Logger.cpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 17:27:02 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 17:27:03 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Logger.hpp"
#include <iostream>
#include <fstream>
#include <ctime>

Logger::Logger( std::string filename ) : _file(filename) {}

void 			Logger::_logToConsole(std::string str) {

	std::cout << str << std::endl;
}

void 			Logger::_logToFile(std::string str) {


}

std::string 	Logger::_makeLogEntry( std::string msg ) {

	time_t		t(std::time( 0 ));
	struct tm	*now(localtime( &t ));
	std::string log;

	log = '[';
	log += 1900 + now->tm_year;
	if (now->tm_mon + 1 < 10)
		log += '0';
	log += now->tm_mon + 1;
	if (now->tm_mday < 10)
		log += '0';
	log += now->tm_mday + '_';
	if (now->tm_hour < 10)
		log += '0';
	log += now->tm_hour;
	if (now->tm_min < 10)
		log += '0';
	log += now->tm_min;
	if (now->tm_sec + 1 < 10)
		log += '0';
	log += now->tm_sec + 1 + "] " + msg;

	return log;
}