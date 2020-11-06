/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/11/06 15:00:47 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/11/06 15:00:48 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <stack>
#include <iostream>

template < class T, class Container = std::deque<T> >
class MutantStack : public std::stack<T, Container> {

public:

	MutantStack() {}

	MutantStack( const MutantStack & src ) : std::stack<T, Container>(src) {}

	MutantStack	operator=( const MutantStack & rhs ) {

		if ( this != &rhs )
			std::stack<T, Container>::operator=( rhs );
		return *this;
	}

	~MutantStack() {}

	typedef typename Container::iterator iterator;
	typedef typename Container::reverse_iterator reverse_iterator;

	iterator			begin()			{ return this->c.begin(); }
	iterator			end()			{ return this->c.end(); }
	reverse_iterator	rbegin()		{ return this->c.rbegin(); }
	reverse_iterator	rend()			{ return this->c.rend(); }

};
