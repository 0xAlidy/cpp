/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/14 15:03:49 by alidy             #+#    #+#             */
/*   Updated: 2021/06/14 15:05:07 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

# include "easyfind.hpp"

int			main(void)
{
	std::vector<int> v;
    int nb = 10;

	v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
	try
	{
        easyfind(v, nb);
		std::cout << "Find : " << nb << " in the vector !" << std::endl;
	}
	catch(std::string str)
	{
		std::cerr << str << std::endl;
	}
    nb++;
	try
	{
		easyfind(v, nb);
		std::cout << "Find : " << nb << " in the vector !" << std::endl;
	}
	catch(std::string str)
	{
		std::cerr << str << std::endl;
	}
}