/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   RobotomyRequestForm.cpp                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 18:02:31 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/27 18:02:32 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <iostream>
#include <sys/time.h>
#include <stdlib.h>

RobotomyRequestForm::RobotomyRequestForm( std::string const & target ) :
		Form( "robotomy request", 72, 45 ) {

	this->setTarget( target );
}

RobotomyRequestForm::RobotomyRequestForm( RobotomyRequestForm const & src ) : Form( src ) {

	*this = src;
}

RobotomyRequestForm &	RobotomyRequestForm::operator=( RobotomyRequestForm const & rhs ) {

	Form::operator=( rhs );

	if ( this != &rhs )
		this->setTarget( rhs.getTarget() );

	return *this;
}

RobotomyRequestForm::~RobotomyRequestForm() {}

void	RobotomyRequestForm::execute( Bureaucrat const & executor ) const {

	Form::execute( executor );

	timeval	t;

	gettimeofday( &t, NULL );
	srand( t.tv_usec );

	std::cout << "Rrrrrrrrrrr ..." << std::endl;

	if ( rand() % 2 )
		std::cout << "Robotomy of " << this->getTarget() << " has failed" << std::endl;
	else
		std::cout << "Robotomy of " << this->getTarget() << " is successful" << std::endl;
}
