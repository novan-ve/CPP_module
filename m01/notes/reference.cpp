/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   reference.cpp                                      :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 14:55:16 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/29 15:42:05 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

// Reference is a non void constant pointer
// If at some point it shouldnt exist or it should change, use a pointer
// If it should always exist and never change, use a reference

#include <iostream>
#include <string>

class Student
{
	private:
		std::string _login;
	
	public:
		Student(std::string const & login) : _login(login) {}

		std::string&	getLoginRef()
		{
			return this->_login;
		}

		std::string const & getLoginRefConst() const
		{
			return this->_login;
		}

		std::string* 	getLoginPtr()
		{
			return &(this->_login);
		}

		std::string const * getLoginPtrConst() const
		{
			return &(this->_login);
		}
};

void	example3()
{
	Student			bob = Student("bfubar");
	Student const	jim = Student("jfubar");

	std::cout << bob.getLoginRefConst() << " " << jim.getLoginRefConst() << std::endl;
	std::cout << *(bob.getLoginPtrConst()) << " " << *(jim.getLoginPtrConst()) << std::endl;

	bob.getLoginRef() = "bobfubar";
	std::cout << bob.getLoginRefConst() << std::endl;

	*(bob.getLoginPtr()) = "bobbyfubar";
	std::cout << bob.getLoginRefConst() << std::endl;
}

// ***************************************************************************

void	byPtr(std::string* str)
{
	*str += " and ponies";
}

void	byConstPtr(std::string const * str)
{
	std::cout << *str << std::endl;
}

void	byRef(std::string& str)
{
	str += " and ponies";
}

void	byConstRef(std::string const & str)
{
	std::cout << str << std::endl;
}

void	example2()
{
	std::string	str = "i like butterflies";

	std::cout << str << std::endl;
	byPtr(&str);
	byConstPtr(&str);

	str = "i like otters";

	std::cout << str << std::endl;
	byRef(str);
	byConstRef(str);
	std::cout << std::endl;
}

// ***************************************************************************

void	example1()
{
	int		numberOfBalls = 42;

	int*	ballsPtr = &numberOfBalls;
	int&	ballsRef = numberOfBalls;
	//int& ballsRef2; errors, has to be initialised at start

	std::cout << numberOfBalls << " " << *ballsPtr << " " << ballsRef << std::endl;

	*ballsPtr = 21;
	std::cout << numberOfBalls << std::endl;
	ballsRef = 84;
	std::cout << numberOfBalls << std::endl << std::endl;
}

int main()
{
	example1();
	example2();
	example3();

	return (0);
}
