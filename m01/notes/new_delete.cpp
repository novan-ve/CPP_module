/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   new_delete.cpp                                     :+:    :+:            */
/*                                                     +:+                    */
/*   By: novan-ve <novan-ve@student.codam.n>          +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/09/29 14:39:09 by novan-ve      #+#    #+#                 */
/*   Updated: 2020/09/29 14:39:11 by novan-ve      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

class Student2 {
	
	private:
		std::string _login;

	public:
		Student2() : _login("ldefault") {

			std::cout << "Student " << this->_login << " is born" << std::endl;
		}

		~Student2() {
			
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

class Student {

	private:
		std::string _login;

	public:
		Student(std::string login) : _login(login) {
			
			std::cout << "Student " << this->_login << " is born" << std::endl;
		}
		
		~Student() {
			
			std::cout << "Student " << this->_login << " died" << std::endl;
		}
};

int		main()
{
	Student		bob = Student("bfubar");
	Student*	jim = new Student("jfubar");
	Student2*	students = new Student2[2];

	//Do some stuff here

	delete jim; //jim is destroyed

	delete [] students; //all students are destroyed

	return (0); //bob is destroyed
}
