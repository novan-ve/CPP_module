/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   PresidentialPardonForm.hpp                         :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 18:01:57 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/27 18:01:58 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include "Form.hpp"
# include <string>

class PresidentialPardonForm : public Form {

private:

	PresidentialPardonForm();

public:

	PresidentialPardonForm( std::string const & target );
	PresidentialPardonForm( PresidentialPardonForm const & src );
	PresidentialPardonForm &	operator=( PresidentialPardonForm const & rhs );
	virtual ~PresidentialPardonForm();

	virtual void 		execute( Bureaucrat const & executor ) const;

};

#endif
