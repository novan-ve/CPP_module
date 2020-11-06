/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 15:01:01 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/06 15:01:02 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "mutantstack.hpp"
#include <iostream>

int main()
{
	// **************** Subject tests ****************

	MutantStack<int> mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;

	mstack.pop();

	std::cout << mstack.size() << std::endl;

	mstack.push(3);
	mstack.push(5);
	mstack.push(737);
	mstack.push(0);

	MutantStack<int>::iterator it = mstack.begin();
	MutantStack<int>::iterator ite = mstack.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::stack<int> s(mstack);

	// **************** Own tests ****************

	std::cout << std::endl;

	MutantStack<int> mstack1;

	mstack1.push(1);
	mstack1.push(2);
	mstack1.push(3);
	mstack1.push(4);

	MutantStack<int> mstack2( mstack1 );
	MutantStack<int> mstack3;
	mstack3 = mstack1;

	mstack1.pop();

	std::cout << "Mstack1: ";
	for ( it = mstack1.begin(); it != mstack1.end(); ++it )
		std::cout << *it;
	std::cout << std::endl;

	std::cout << "Mstack2: ";
	for ( it = mstack2.begin(); it != mstack2.end(); ++it )
		std::cout << *it;
	std::cout << std::endl;

	std::cout << "Mstack3: ";
	for ( it = mstack3.begin(); it != mstack3.end(); ++it )
		std::cout << *it;
	std::cout << std::endl;

	return 0;
}
