/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RadScorpion.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:26:33 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:26:34 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef RADSCORPION_HPP
# define RADSCORPION_HPP

# include "Enemy.hpp"

class RadScorpion : public Enemy {

public:

	RadScorpion();
	RadScorpion( RadScorpion const & src );
	RadScorpion &	operator=( RadScorpion const & rhs );
	~RadScorpion();

};

#endif
