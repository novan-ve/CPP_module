/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 10:53:02 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/31 10:53:03 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Convert.hpp"

Convert::Convert( const std::string & arg ) : _arg( arg ) {}

Convert::Convert( const Convert & src ) {

	*this = src;
}

Convert &	Convert::operator=( const Convert & rhs ) {

	if ( this != &rhs )
		this->_arg = rhs._arg;

	return *this;
}

Convert::~Convert() {}

int 		Convert::_formatCheck() const {

	for ( unsigned long i = 0; i < this->_arg.length(); i++ ) {

		if ( (this->_arg[i] < '0' || this->_arg[i] > '9' ) &&
			 !( i == this->_arg.length() - 1 && this->_arg[i] == 'f' ) &&
			 !( i < this->_arg.length() - 1 && (this->_arg[i] == '+' || this->_arg[i] == '-' || this->_arg[i] == '.' ) ) ) {

			return 0;
		}
	}
	return 1;
}

char 		Convert::toChar() const {

	int 	val = toInt();

	if ( val == 0 && this->_arg[0] != '0' && !this->_arg.compare( "+0" ) && !this->_arg.compare( "-0" ) )
		return 0;
	if ( val < 0 || val > 127 )
		throw( "Impossible" );
	else if ( val < 33 || val == 127 )
		throw( "Non displayable" );
	else
		return static_cast<char>( val );
}

int 		Convert::toInt() const {

	std::string pseudo[8] = { "-inff", "+inff", "nanf", "-inf", "+inf", "nan", "inff", "inf" };

	for ( int i = 0; i < 8; i++ ) {

		if ( !this->_arg.compare( pseudo[i] ) ) {

			throw( "Impossible" );
		}
	}
	if ( !this->_formatCheck() )
		throw( "Wrong format" );
	try {
		int tmp = std::stoi( this->_arg );
		return tmp;
	}
	catch ( std::invalid_argument ) {
		throw( "Wrong format" );
	}
	catch ( std::out_of_range ) {
		throw( "Impossible" );
	}
}

float 		Convert::toFloat() const {

	if ( !this->_arg.compare( "nan" ) || !this->_arg.compare( "nanf" ) )
		throw( "nanf" );
	if ( !this->_arg.compare( "-inf" ) || !this->_arg.compare( "-inff" ) )
		throw( "-inff" );
	if ( !this->_arg.compare( "+inf" ) || !this->_arg.compare( "+inff" ) || !this->_arg.compare( "inf" ) || !this->_arg.compare( "inff" ) )
		throw( "inff" );
	if ( !this->_formatCheck() )
		throw( "Wrong format" );
	try {
		float tmp = std::stof( this->_arg );
		return tmp;
	}
	catch ( std::invalid_argument ) {
		throw( "Wrong format" );
	}
	catch ( std::out_of_range ) {

		if ( this->_arg[0] == '-' )
			throw( "-inff" );
		throw( "inff" );
	}
}

double 		Convert::toDouble() const {

	if ( !this->_arg.compare( "nan" ) || !this->_arg.compare( "nanf" ) )
		throw( "nan" );
	if ( !this->_arg.compare( "-inf" ) || !this->_arg.compare( "-inff" ) )
		throw( "-inf" );
	if ( !this->_arg.compare( "+inf" ) || !this->_arg.compare( "+inff" ) || !this->_arg.compare( "inf" ) || !this->_arg.compare( "inff" ) )
		throw( "inf" );
	if ( !this->_formatCheck() )
		throw( "Wrong format" );
	try {
		double tmp = std::stod( this->_arg );
		return tmp;
	}
	catch ( std::invalid_argument ) {
		throw( "Wrong format" );
	}
	catch ( std::out_of_range ) {

		if ( this->_arg[0] == '-' )
			throw( "-inf" );
		throw( "inf" );
	}
}
