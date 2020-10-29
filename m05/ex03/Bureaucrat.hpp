/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Bureaucrat.hpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/25 13:25:54 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/25 13:25:55 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include "Form.hpp"
# include <stdexcept>
# include <string>

class Form;

class Bureaucrat {

private:

	Bureaucrat();

	std::string const	_name;
	int 				_grade;

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

	Bureaucrat( std::string const & newName, int newGrade );
	Bureaucrat( Bureaucrat const & src );
	Bureaucrat &	operator=( Bureaucrat const & rhs );
	virtual ~Bureaucrat();

	std::string const &	getName() const;
	int 				getGrade() const;

	void 				increment();
	void 				decrement();

	void 				signForm( Form & i );
	void 				executeForm( Form const & form );

};

std::ostream &	operator<<( std::ostream & o, Bureaucrat const & i );

#endif
