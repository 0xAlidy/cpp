/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/14 11:42:14 by alidy             #+#    #+#             */
/*   Updated: 2020/04/25 18:37:38 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.hpp"

int main(int argc, char **argv)
{
    std::string line;
    int         i = 1;
    
    if (argc == 1)
        while (std::getline(std::cin, line))
            std::cout << line << std::endl;
    while (i < argc)
    {
        std::ifstream fd;

        fd.open(argv[i]);
        if (std::experimental::filesystem::is_directory(fd))
            std::cout << "C'est un dossier" << std::endl;
        else if (!fd.fail())
        {
            while (std::getline(fd, line))
                std::cout << line << std::endl;
            fd.close();
        }
        else
            std::cout << "Erreur lors de l'ouverture du fichier : " << argv[i] << std::endl;
        i++;   
    }
    return (0);
}