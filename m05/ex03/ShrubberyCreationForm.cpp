/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ShrubberyCreationForm.cpp                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <marvin@codam.nl>                   +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/10/27 18:01:36 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/10/31 09:13:44 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm( std::string const & target ) :
		Form( "shrubbery creation", 145, 137 ) {

	this->setTarget( target );
}

ShrubberyCreationForm::ShrubberyCreationForm( ShrubberyCreationForm const & src ) : Form( src ) {

	*this = src;
}

ShrubberyCreationForm &	ShrubberyCreationForm::operator=( ShrubberyCreationForm const & rhs ) {

	Form::operator=( rhs );

	if ( this != &rhs )
		this->setTarget( rhs.getTarget() );

	return *this;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {}

void	ShrubberyCreationForm::execute( Bureaucrat const & executor ) const {

	Form::execute( executor );

	const char	*fileName = ( this->getTarget() + "_shrubbery" ).c_str();
	std::ofstream 	file( fileName );

	if ( !file.good() )
		throw ShrubberyCreationForm::FileFailedException();

	file <<	"          &&& &&  & &&"			<< std::endl;
	file <<	"      && &\\/&\\|& ()|/ @, &&"		<< std::endl;
   	file <<	"      &\\/(/&/&||/& /_/)_&/_&"		<< std::endl;
	file <<	"   &() &\\/&|()|/&\\/ '%\" & ()"	<< std::endl;
	file <<	"  &_\\_&&_\\ |& |&&/&__%_/_& &&"	<< std::endl;
	file <<	"&&   && & &| &| /& & % ()& /&&"	<< std::endl;
	file <<	" ()&_---()&\\&\\|&&-&&--%---()~"	<< std::endl;
	file <<	"     &&     \\|||"					<< std::endl;
	file <<	"             |||"					<< std::endl;
	file <<	"             |||"					<< std::endl;
	file <<	"             |||"					<< std::endl;
	file <<	"       , -=-~  .-^- _"				<< std::endl << std::endl;
	file <<	"          &&& &&  & &&"			<< std::endl;
	file <<	"      && &\\/&\\|& ()|/ @, &&"		<< std::endl;
	file <<	"      &\\/(/&/&||/& /_/)_&/_&"		<< std::endl;
	file <<	"   &() &\\/&|()|/&\\/ '%\" & ()"	<< std::endl;
	file <<	"  &_\\_&&_\\ |& |&&/&__%_/_& &&"	<< std::endl;
	file <<	"&&   && & &| &| /& & % ()& /&&"	<< std::endl;
	file <<	" ()&_---()&\\&\\|&&-&&--%---()~"	<< std::endl;
	file <<	"     &&     \\|||"					<< std::endl;
	file <<	"             |||"					<< std::endl;
	file <<	"             |||"					<< std::endl;
	file <<	"             |||"					<< std::endl;
	file <<	"       , -=-~  .-^- _"				<< std::endl;

	file.close();
}

ShrubberyCreationForm::FileFailedException::FileFailedException() {}

ShrubberyCreationForm::FileFailedException::FileFailedException( FileFailedException const & src ) {

	*this = src;
}

ShrubberyCreationForm::FileFailedException &	ShrubberyCreationForm::FileFailedException::operator=(
		FileFailedException const & rhs ) {

	(void)rhs;
	return *this;
}

ShrubberyCreationForm::FileFailedException::~FileFailedException() throw () {}

const char * ShrubberyCreationForm::FileFailedException::what() const throw() {

	return "file creation failed";
}
