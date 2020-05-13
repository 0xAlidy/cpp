/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex04.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 11:24:09 by alidy             #+#    #+#             */
/*   Updated: 2020/04/01 11:27:29 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main()
{
    std::string str;
    std::string *pointer;
    std::string &reference = str; // obligé

    str = "HI THIS IS BRAIN";
    pointer = &str;
    std::cout << "Pointer: " << *pointer << std::endl;
    std::cout << "Reference: " << reference << std::endl;
    return (0);
}
