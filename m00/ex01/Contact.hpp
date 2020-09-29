/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Contact.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/23 15:34:23 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/23 15:34:29 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

# include <string>

class	Contact {

	public:

	void		setFirstName( std::string str);
	void		setLastName( std::string str);
	void		setNickname( std::string str);
	void		setLogin( std::string str);
	void		setPostal( std::string str);
	void		setEmail( std::string str);
	void		setPhone( std::string str);
	void		setBirthday( std::string str);
	void		setMeal( std::string str);
	void		setUnderwear( std::string str);
	void		setSecret( std::string str);

	void		printAll( void ) const;

	std::string	getFirstName( void ) const;
	std::string	getLastName( void ) const;
	std::string getNickname( void ) const;

	private:

	std::string	_firstName;
	std::string	_lastName;
	std::string	_nickname;
	std::string	_login;
	std::string	_postal;
	std::string	_email;
	std::string	_phone;
	std::string	_birthday;
	std::string	_meal;
	std::string	_underwear;
	std::string	_secret;

};

#endif