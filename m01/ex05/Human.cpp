/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.cpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 20:39:25 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/03 13:18:56 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

Human::Human() {}

Human::~Human() {}

const Brain& Human::getBrain()
{
	return this->_myBrain;
}

std::string	Human::identify()
{
	return this->_myBrain.identify();
}
