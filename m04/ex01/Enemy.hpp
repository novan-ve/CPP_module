/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Enemy.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/18 13:25:41 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/18 13:25:42 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ENEMY_HPP
# define ENEMY_HPP

# include <string>

class Enemy {

private:

	Enemy();

protected:

	int 		_hp;
	std::string _type;

public:

	Enemy( int hp, std::string const & type );
	Enemy( Enemy const & src );
	Enemy &	operator=( Enemy const & rhs );
	virtual ~Enemy();

	std::string const &	getType() const;
	int 				getHP() const;

	virtual void 	takeDamage( int );

};

#endif
