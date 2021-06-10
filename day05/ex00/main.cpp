/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/07 13:58:19 by alidy             #+#    #+#             */
/*   Updated: 2021/06/07 13:58:20 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

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
}