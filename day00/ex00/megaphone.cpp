/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 16:01:48 by alidy             #+#    #+#             */
/*   Updated: 2020/03/27 09:11:16 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

char    to_uppercase(char c)
{
    if (c >= 'a' && c <= 'z')
        return (c - 32);
    else
        return (c);
}

int     main(int argc, char const *argv[])
{
    int i;
    int y;

    i = 1;
    y = 0;
    while (i < argc)
    {
        while (argv[i][y])
        {
            std::cout << to_uppercase(argv[i][y]);
            y++;
        }
        y = 0;
        i++;
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << "\n";
    return (0);
}
