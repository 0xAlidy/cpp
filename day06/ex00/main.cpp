/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/08 13:22:21 by alidy             #+#    #+#             */
/*   Updated: 2021/06/09 12:54:47 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConversion.hpp"

int main(int argc, char **argv)
{
    for(int i = 1; i < argc; i++)
    {
        ScalarConversion sc(argv[i]);
        char c;
        c = static_cast<char>(sc.getNb());
        std::cout << sc.getNb() << std::endl;
        std::cout << c << std::endl;
    }
    return (0);
}