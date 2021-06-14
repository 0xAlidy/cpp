/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/12 12:37:56 by alidy             #+#    #+#             */
/*   Updated: 2021/06/14 14:41:18 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"

int			main(void)
{
    char c = 65;
    
	Array<int> test0;
	std::cout << "Test0 = ";
	for (int i = 0; i < test0.size(); i++)
	{
		test0[i] = static_cast<int>(i);
		std::cout << test0[i] << " ";
	}
	std::cout << std::endl;

	Array<int> test1(15);
	std::cout << "Test1 = ";
	for (int i = 0; i < test1.size(); i++)
	{
		test1[i] = static_cast<int>(i);
		std::cout << test1[i] << " ";
	}
	std::cout << std::endl;

	Array<int> test2(test1);
	std::cout << "Test2 = ";
	for (int i = 0; i < test2.size(); i++)
	{
		std::cout << test2[i] << " ";
	}
	std::cout << std::endl;

	Array<int> test3 = test2;
	std::cout << "Test3 = ";
	for (int i = 0; i < test3.size(); i++)
	{
		std::cout << test3[i] << " ";
	}
	std::cout << std::endl;
	try
	{
		std::cout << test3[16] << std::endl;
	}
	catch(const std::out_of_range& err)
	{
		std::cerr << err.what() << std::endl;
	}
    try
	{
		std::cout << test3[-10] << std::endl;
	}
	catch(const std::out_of_range& err)
	{
		std::cerr << err.what() << std::endl;
	}
	Array<char> testChar(3);
	std::cout << "TestChar = ";
	for (int i = 0; i < testChar.size(); i++)
	{
		testChar[i] = c;
		std::cout << testChar[i] << " ";
        c++;
	}
	std::cout << std::endl;
	const Array<char> testChar2(testChar);
	std::cout << "TestChar2 (const) = ";
	for (int i = 0; i < testChar2.size(); i++)
		std::cout << testChar2[i] << " ";
	std::cout << std::endl;
	return (0);
}