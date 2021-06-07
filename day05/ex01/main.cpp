#include "Bureaucrat.hpp"
#include "Form.hpp"

int			main( void )
{
	std::cout << std::endl;
	std::cout << "---Bureaucrat---" << std::endl;
	std::cout << std::endl;
	try
	{
		Bureaucrat Jamy("Jamy", 200);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		Bureaucrat Fred("Fred", 0);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	Bureaucrat Jones("Jones", 50);
	Bureaucrat Kevin("Kevin", 50);
	std::cout << std::endl;
	std::cout << Jones << Kevin << std::endl;
	for(int i = Jones.getGrade(); i != 151; i++)
	{
		try 
		{
			Jones.downGrade();
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	for(int i = Kevin.getGrade(); i != 0; i--)
	{
		try 
		{
			Kevin.upGrade();
		}
		catch (std::exception& e)
		{
			std::cerr << e.what() << std::endl;
		}
	}
	std::cout << std::endl;
	std::cout << Jones << Kevin << std::endl;
	Bureaucrat Jones2 = Jones;
	std::cout << Jones2 << std::endl;
	Bureaucrat Jones3(Jones);
	std::cout << Jones3 << std::endl;

	std::cout << "---Form---" << std::endl;
	std::cout << std::endl;
	try
	{
		std::cout << "Create form too high" << std::endl;
		Form paperfalse("paperfalse", 0, 5);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	try
	{
		std::cout << "Create form too low" << std::endl;
		Form paperfalse2("paperfalse2", 160, 5);
	}
	catch(std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	std::cout << std::endl;
	Form paper("paper", 10, 5);
	std::cout << "Try signed paper with Jones" << std::endl;
	Jones.signForm(paper);
	std::cout << paper << std::endl;
	std::cout << "Try signed paper with Kevin" << std::endl;
	Kevin.signForm(paper);
	std::cout << paper << std::endl;
	Form paper2 = paper;
	std::cout << paper2 << std::endl;
	Form paper3(paper);
	std::cout << paper3 << std::endl;
	return 0;
}