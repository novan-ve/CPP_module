/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Form.hpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 14:53:21 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/27 14:53:22 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include "Bureaucrat.hpp"
# include <string>

class Bureaucrat;

class Form {

private:

	Form();

	bool 				_signed;
	int const			_signGrade;
	int const			_execGrade;
	std::string const	_name;
	std::string			_target;

protected:

	void 				setTarget( std::string const & target );

public:

	class GradeTooHighException : public std::exception {

	public:

		GradeTooHighException();
		GradeTooHighException( GradeTooHighException const & src );
		GradeTooHighException &	operator=( GradeTooHighException const & rhs );
		virtual ~GradeTooHighException() throw ();

		virtual const char * what () const throw ();

	};

	class GradeTooLowException : public std::exception {

	public:

		GradeTooLowException();
		GradeTooLowException( GradeTooLowException const & src );
		GradeTooLowException &	operator=( GradeTooLowException const & rhs );
		virtual ~GradeTooLowException() throw ();

		virtual const char * what () const throw ();

	};

	class FormNotSignedException : public std::exception {

	public:

		FormNotSignedException();
		FormNotSignedException( FormNotSignedException const & src );
		FormNotSignedException &	operator=( FormNotSignedException const & rhs );
		virtual ~FormNotSignedException() throw ();

		virtual const char * what () const throw ();

	};

	Form( std::string const & name, int signGrade, int execGrade );
	Form( Form const & src );
	Form &	operator=( Form const & rhs );
	virtual ~Form();

	bool 				getSigned() const;
	int 				getSignGrade() const;
	int 	 			getExecGrade() const;
	std::string const &	getName() const;
	std::string const & getTarget() const;

	void 				beSigned( Bureaucrat const & i );
	virtual void 		execute( Bureaucrat const & executor ) const = 0;

};

std::ostream &	operator<<( std::ostream & o, Form const & i );

#endif
