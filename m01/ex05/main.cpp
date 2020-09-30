/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 20:41:35 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/30 21:01:43 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

//#include "Human.hpp"
#include "Brain.hpp"
#include <iostream>

int	main()
{
	//Human		bob;

	//std::cout << bob.identify() << std::endl;
	//std::cout << bob.getBrain().identify() << std::endl;
	
	Brain	test;

	std::cout << test.identify() << std::endl;
}

