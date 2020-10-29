/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.hpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 18:01:32 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/27 18:01:33 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include "Form.hpp"
# include <string>

class ShrubberyCreationForm : public Form {

private:

	ShrubberyCreationForm();

public:

	class FileFailedException : public std::exception {

	public:

		FileFailedException();
		FileFailedException( FileFailedException const & src );
		FileFailedException & operator=( FileFailedException const & rhs );
		virtual ~FileFailedException();

		virtual const char * what () const throw ();

	};

	ShrubberyCreationForm( std::string const & target );
	ShrubberyCreationForm( ShrubberyCreationForm const & src );
	ShrubberyCreationForm &	operator=( ShrubberyCreationForm const & rhs );
	virtual ~ShrubberyCreationForm();

	virtual void 		execute( Bureaucrat const & executor ) const;

};

#endif
