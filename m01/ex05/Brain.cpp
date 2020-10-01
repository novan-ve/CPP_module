/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Brain.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 20:38:59 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/30 21:01:11 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"
#include <sstream>

std::string Brain::identify() const {

	std::stringstream	strm;
	strm << this;

	return strm.str();
}
