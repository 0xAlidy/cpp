/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:57:22 by alidy             #+#    #+#             */
/*   Updated: 2021/06/08 13:00:48 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

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
	ShrubberyCreationForm sh("Home");
	PresidentialPardonForm pr("Pres");
	RobotomyRequestForm ro("Robot");
	std::cout << std::endl;
	std::cout << sh << pr << ro << std::endl;
	std::cout << "SIGNED JONES" << std::endl;
	std::cout << std::endl;
	Jones.signForm(sh); 
	Jones.signForm(ro);
	Jones.signForm(pr);
	std::cout << std::endl;
	
	std::cout << "SIGNED KEVIN" << std::endl;
	std::cout << std::endl;
	Kevin.signForm(sh);
	Kevin.signForm(ro);
	Kevin.signForm(pr);
	std::cout << std::endl;

	std::cout << "EXECUTE JONES" << std::endl;
	std::cout << std::endl;
	Jones.executeForm(sh);
	Jones.executeForm(ro);
	Jones.executeForm(pr);
	std::cout << std::endl;

	std::cout << "EXECUTE KEVIN" << std::endl;
	std::cout << std::endl;
	Kevin.executeForm(sh);
	Kevin.executeForm(ro);
	Kevin.executeForm(pr);
	std::cout << std::endl;
	std::cout << "---INTERN---" << std::endl;
	try
	{
		Intern someRandomIntern;
		Form* pp = someRandomIntern.makeForm("presidential pardon", "Bender");
		std::cout << pp->getName() << std::endl;
		Form* rq = someRandomIntern.makeForm("robotomy request", "Bender2");
		std::cout << rq->getName() << std::endl;
		/*Form* test = someRandomIntern.makeForm("test", "Test");
		std::cout << test->getName() << std::endl;*/
		Kevin.signForm(*pp);
		Kevin.executeForm(*pp);
		Kevin.signForm(*rq);
		Kevin.executeForm(*rq);
		delete (pp);
		delete (rq);
		//delete (test);
	}
	catch (std::exception& e)
	{
		std::cerr << e.what() << std::endl;
	}
	return 0;
}