/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   search_cmd.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 12:05:56 by alidy             #+#    #+#             */
/*   Updated: 2020/03/30 12:19:35 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

std::string truncate_string(std::string str)
{
    if (str.length() > 10)
    {
        str.resize(9);
        str.push_back('.');
    }
    return (str);
}

void    print_exemple(void)
{
    std::cout << "|" << std::setw(10) << "index" << "|";
    std::cout << std::setw(10) << "Prenom" << "|";
    std::cout << std::setw(10) << "Nom" << "|";
    std::cout << std::setw(10) << "Surnom" << "|" << std::endl;
}

void    print_all_contacts(int nb, Contact *tab)
{
    int i;

    i = 0;
    while (i < nb)
    {
        std::cout << "|" << std::setw(10) << i << "|";
        std::cout << std::setw(10) << truncate_string(tab[i].get_firstName()) << "|";
        std::cout << std::setw(10) << truncate_string(tab[i].get_lastName()) << "|";
        std::cout << std::setw(10) << truncate_string(tab[i].get_nickname()) << "|" << std::endl;
        i++;
    }
    std::cout << std::endl;
}

void    print_details(int nb, Contact *tab)
{
    int index;

    index = 0;
    std::cout << "Veuillez entrer l'index d'un contact pour avoir plus d'informations" << std::endl;
    std::cin >> index;
    if (index < 0 || index >= nb || !std::cin)
    {
        std::cout << "L'index est invalide, retour à l'acceuil ..." << std::endl;
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    }
    else
    {
        std::cout << "Prenom: " << tab[index].get_firstName() << std::endl;
        std::cout << "Nom: " << tab[index].get_lastName() << std::endl;
        std::cout << "Surnom: " << tab[index].get_nickname() << std::endl;
        std::cout << "Login: " << tab[index].get_login() << std::endl;
        std::cout << "Adresse postale: " << tab[index].get_postalAddress() << std::endl;
        std::cout << "Adresse email: " << tab[index].get_emailAddress() << std::endl;
        std::cout << "Numero de telephone: " << tab[index].get_phoneNumber() << std::endl;
        std::cout << "Date de naissance: " << tab[index].get_birthdayDate() << std::endl;
        std::cout << "Plat favori: " << tab[index].get_favoriteMeal() << std::endl;
        std::cout << "Couleur des sous vetements: " << tab[index].get_underwearColor() << std::endl;
        std::cout << "Secret le plus sombre: " << tab[index].get_darkestSecret() << std::endl;
        std::cin.ignore();
    }
    std::cout << std::endl;
}

void    search_contact(int nb, Contact *tab)
{
    print_exemple();
    print_all_contacts(nb, tab);
    print_details(nb, tab);
}
