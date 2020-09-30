/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 17:07:48 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/29 17:41:45 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"
#include <string>
#include <iostream>

void	ponyOnTheStack()
{
	Pony	stackPony("black");

	std::cout << "StackPony color: " << stackPony.color << std::endl;
	stackPony.color = "gray";
	std::cout << "StackPony color: " << stackPony.color << std::endl;
}

void	ponyOnTheHeap()
{
	Pony	*heapPony = new Pony("brown");

	std::cout << "HeapPony color: " << heapPony->color << std::endl;
	heapPony->color = "white";
	std::cout << "HeapPony color: " << heapPony->color << std::endl;
	
	delete heapPony;
}

int		main()
{
	std::cout << "Stack pony:" << std::endl;
	ponyOnTheStack();

	std::cout << std::endl << "Heap pony:" << std::endl;
	ponyOnTheHeap();

	std::cout << "Destructor should be called ^" << std::endl;
	return 0;
}
