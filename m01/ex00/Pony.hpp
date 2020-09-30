/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Pony.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 17:19:58 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/29 17:25:33 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PONY_HPP
# define PONY_HPP

# include <string>

class	Pony {

	public:

		Pony( std::string inputColor );
		~Pony();

		std::string color;

};

#endif