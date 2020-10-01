/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/01 16:48:39 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/01 16:48:39 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "Human.hpp"

int 	main()
{
	Human	Player;

	Player.action("meleeAttack", "zombie");
	Player.action("rangedAttack", "zombie");
	Player.action("intimidatingShout", "zombie");
}
