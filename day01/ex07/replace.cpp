/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   replace.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/04/01 18:53:04 by alidy             #+#    #+#             */
/*   Updated: 2020/04/02 15:42:40 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
    std::string     filename;
    std::string     s1;
    std::string     s2;
    std::string     buf;
    std::ifstream   file;
    std::ofstream   newFile;

    if (argc != 4)
    {
        std::cout << "Erreur, Le programme doit etre lancé sous la forme suivante:" << std::endl;
        std::cout << "./replace FILENAME <find> <replace>" << std::endl;
        return (0);
    }
    filename = argv[1];
    file.open(filename);
    if (file.fail())
    {
        std::cout << "Erreur à l'ouverture du fichier !" << std::endl;
        return (0);
    }
    s1 = argv[2];
    s2 = argv[3];
    if (s1.empty() || s2.empty())
    {
        std::cout << "Erreur, les chaines de caracteres spécifiées ne peuvent pas etre vide:" << std::endl;
        return (0);
    }
    newFile.open(filename + ".replace");
    if (newFile.fail())
    {
        std::cout << "Erreur à la création du fichier replace !" << std::endl;
        return (0);
    }
    while (std::getline(file, buf))
    {
        while (buf.find(s1) != std::string::npos)
            buf.replace(buf.find(s1), s1.length(), s2);
        newFile << buf << std::endl;
    }
    file.close();
    newFile.close();
    return (0);
}