/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/22 13:05:31 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/29 13:04:49 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Phonebook.hpp"
#include <iostream>
#include <iomanip>
#include <string>

int		read_input(std::string *input)
{
	if (getline(std::cin, *input).good() == false)
	{
		std::cout << std::endl;
		return (0);
	}
	return (1);
}

int		main(void)
{
	std::string input;
	Phonebook	phonebook;
	int			count;
	int			i;

	count = 0;
	while (1)
	{
		if (!read_input(&input))
			return (0);
		if (!input.compare("EXIT"))
			break ;
		if (!input.compare("ADD"))
		{
			if (count == 8)
			{
				std::cout << "Phonebook is full" << std::endl;
				continue;
			}

			std::cout << "First name: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setFirstName( input );

			std::cout << "Last name: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setLastName( input );

			std::cout << "Nickname: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setNickname( input );

			std::cout << "Login: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setLogin( input );

			std::cout << "Postal address: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setPostal( input );

			std::cout << "Email address: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setEmail( input );

			std::cout << "Phone number: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setPhone( input );

			std::cout << "Birthday date: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setBirthday( input );

			std::cout << "Favorite meal: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setMeal( input );

			std::cout << "Underwear color: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setUnderwear( input );

			std::cout << "Darkest secret: ";
			if (!read_input(&input))
				return (0);
			phonebook.contacts[count].setSecret( input );

			count++;
		}
		else if (!input.compare("SEARCH"))
		{
			std::cout << std::setw(10) << "index" << '|';
			std::cout << std::setw(10) << "first name" << '|';
			std::cout << std::setw(10) << "last name" << '|';
			std::cout << std::setw(10) << "nickname" << std::endl;
			i = 0;
			while (i < count)
			{
				std::cout << std::setw(10) << i + 1 << '|';
				if (phonebook.contacts[i].getFirstName().size() > 10)
					std::cout << phonebook.contacts[i].getFirstName().substr(0,9) << ".|";
				else
					std::cout << std::setw(10) << phonebook.contacts[i].getFirstName() << '|';
				if (phonebook.contacts[i].getLastName().size() > 10)
					std::cout << phonebook.contacts[i].getLastName().substr(0,9) << ".|";
				else
					std::cout << std::setw(10) << phonebook.contacts[i].getLastName() << '|';
				if (phonebook.contacts[i].getNickname().size() > 10)
					std::cout << phonebook.contacts[i].getNickname().substr(0,9) << '.' << std::endl;
				else
					std::cout << std::setw(10) << phonebook.contacts[i].getNickname() << std::endl;
				i++;
			}
			if (count > 0)
			{
				std::cout << "index: ";
				if (!read_input(&input))
					return (0);
				if (input[1] == '\0' && input[0] > 48 && input[0] <= 48 + count)
					phonebook.contacts[input[0] - 49].printAll();
				else
					std::cout << "Invalid index" << std::endl;
			}
		}
	}
	return (0);
}
