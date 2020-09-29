/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 15:34:48 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/23 15:34:49 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include <iostream>

void		Contact::printAll( void ) const {

	std::cout << "First name: " << this->_firstName << std::endl;
	std::cout << "Last name: " << this->_lastName << std::endl;
	std::cout << "Nickname: " << this->_nickname << std::endl;
	std::cout << "Login: " << this->_login << std::endl;
	std::cout << "Postal address: " << this->_postal << std::endl;
	std::cout << "Email address: " << this->_email << std::endl;
	std::cout << "Phone number: " << this->_phone << std::endl;
	std::cout << "Birthday date: " << this->_birthday << std::endl;
	std::cout << "Favorite meal: " << this->_meal << std::endl;
	std::cout << "Underwear color: " << this->_underwear << std::endl;
	std::cout << "Darkest secret: " << this->_secret << std::endl;
}

std::string	Contact::getFirstName( void ) const {

	return this->_firstName;
}

std::string	Contact::getLastName( void ) const {

	return this->_lastName;
}

std::string	Contact::getNickname( void ) const {

	return this->_nickname;
}

void		Contact::setFirstName( std::string str) {

	this->_firstName = str;
}

void		Contact::setLastName( std::string str) {

	this->_lastName = str;
}

void		Contact::setNickname( std::string str) {

	this->_nickname = str;
}

void		Contact::setLogin( std::string str) {

	this->_login = str;
}

void		Contact::setPostal( std::string str) {

	this->_postal = str;
}

void		Contact::setEmail( std::string str) {

	this->_email = str;
}

void		Contact::setPhone( std::string str) {

	this->_phone = str;
}

void		Contact::setBirthday( std::string str) {

	this->_birthday = str;
}

void		Contact::setMeal( std::string str) {

	this->_meal = str;
}

void		Contact::setUnderwear( std::string str) {

	this->_underwear = str;
}

void		Contact::setSecret( std::string str) {

	this->_secret = str;
}
