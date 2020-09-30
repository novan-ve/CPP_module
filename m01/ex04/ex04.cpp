/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex04.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 20:14:27 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/30 20:21:27 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string&	strRef = str;
	std::string*	strPtr = &str;

	std::cout << "Pointer: " << *strPtr << std::endl;
	std::cout << "Reference: " << strRef << std::endl;

	return 0;
}
