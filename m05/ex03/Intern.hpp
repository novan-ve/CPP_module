/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Intern.hpp                                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/28 17:52:34 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/28 17:52:36 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

# include "PresidentialPardonForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "ShrubberyCreationForm.hpp"

class Intern {

public:

	Intern();
	Intern( Intern const & src );
	Intern &	operator=( Intern const & rhs );
	virtual ~Intern();

	Form *	makeForm( std::string const & className, std::string const & target ) const;

};

#endif
