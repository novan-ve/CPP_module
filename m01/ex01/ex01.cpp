/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ex01.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 17:43:02 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/29 17:45:59 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

void	memoryLeak()
{
	std::string* panther = new std::string("String panther");
	
	std::cout << *panther << std::endl;

	delete panther;
}

