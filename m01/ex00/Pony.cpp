/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 17:22:49 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/29 17:25:19 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <iostream>
#include <string>

Pony::Pony ( std::string inputColor ) : color(inputColor) {

	std::cout << "Constructor called" << std::endl;
}

Pony::~Pony () {

	std::cout << "Destructor called" << std::endl;
}
