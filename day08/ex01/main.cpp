/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:14:57 by alidy             #+#    #+#             */
/*   Updated: 2021/06/14 15:18:13 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"
#include <iostream>

int main()
{
	Span s(5);
    Span big(10000);
	try
	{
		s.addNumber(0);
		s.addNumber(1);
		s.addNumber(2);
		s.addNumber(3);
		s.addNumber(4);
		s.addNumber(5);
	}
	catch(std::exception &e)
    { 
        std::cout << e.what() << std::endl;
    }

	try
	{
		std::cout << s.shortestSpan() << std::endl;
		std::cout << s.longestSpan() << std::endl;
	}
	catch(std::exception &e)
    { 
        std::cout << e.what() << std::endl;
    }

	try
	{
		big.addRange(0, 9999);
		std::cout << big.longestSpan() << std::endl;
	}
	catch(std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
	return (0);
}