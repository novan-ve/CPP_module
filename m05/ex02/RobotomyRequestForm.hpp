/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.hpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 18:02:19 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/27 18:02:20 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include "Form.hpp"
# include <string>

class RobotomyRequestForm : public Form {

private:

	RobotomyRequestForm();

public:

	RobotomyRequestForm( std::string const & target );
	RobotomyRequestForm( RobotomyRequestForm const & src );
	RobotomyRequestForm &	operator=( RobotomyRequestForm const & rhs );
	virtual ~RobotomyRequestForm();

	virtual void 		execute( Bureaucrat const & executor ) const;

};

#endif
