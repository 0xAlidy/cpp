/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/18 16:01:48 by alidy             #+#    #+#             */
/*   Updated: 2021/05/25 16:01:36 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int     main(int argc, char const *argv[])
{
    int i = 1;
    int y = 0;

    while (i < argc)
    {
        while (argv[i][y])
        {
            std::cout << (char)toupper(argv[i][y]);
            y++;
        }
        y = 0;
        i++;
    }
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}
