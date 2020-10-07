/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/30 20:39:33 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/03 13:19:24 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"
# include <string>

class	Human
{

public:

	Human();
	~Human();
	const Brain&	getBrain();
	std::string		identify();

private:

	const Brain	_myBrain;

};

#endif
