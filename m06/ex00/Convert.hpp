/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Convert.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/31 09:26:31 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/31 09:26:33 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <string>

class Convert {

private:

	Convert();
	int 		_formatCheck() const;

	std::string _arg;

public:

	Convert( const std::string & arg );
	Convert( const Convert & src );
	Convert &	operator=( const Convert & rhs );
	~Convert();

	char		toChar() const;
	int			toInt() const;
	float		toFloat() const;
	double		toDouble() const;

};
