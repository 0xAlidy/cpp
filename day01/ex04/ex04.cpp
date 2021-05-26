/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 11:24:09 by alidy             #+#    #+#             */
/*   Updated: 2021/05/26 16:32:07 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str;
    std::string *pointer;
    std::string &reference = str;

    str = "HI THIS IS BRAIN";
    pointer = &str;
    std::cout << "Pointer: " << *pointer << std::endl;
    std::cout << "Reference: " << reference << std::endl;
    return (0);
}
