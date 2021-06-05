#include "Bureaucrat.hpp"

int			main( void )
{
	Bureaucrat Master("Master", 1);
	Bureaucrat Noob("Noob", 150);
	Bureaucrat User("User", 100);
	try
	{
		Master.inc();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Noob.dec();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Grade User :" << User.getGrade() << std::endl;
	try
	{
		while (User.getGrade() > 0)
			User.inc();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << "Grade User : " << User.getGrade() << std::endl;
	try
	{
		Bureaucrat problem("problem", 0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat probleme("probleme", 200);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
}