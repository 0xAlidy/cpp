/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/19 12:03:07 by alidy             #+#    #+#             */
/*   Updated: 2021/05/26 13:13:23 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "header.h"

void    welcome(void)
{
    std::cout << std::endl;
    std::cout << "Bienvenue dans votre annuaire !" << std::endl;
    std::cout << "Les commandes prises en charge sont les suivantes:" << std::endl;
    std::cout << "ADD: Ajouter un contact a l'annuaire" << std::endl;
    std::cout << "SEARCH: Affiche la liste des contacts" << std::endl;
    std::cout << "EXIT: Le programme se ferme et les contacts sont perdus à jamais" << std::endl;
    std::cout << std::endl;
}

std::string toupper(std::string str)
{
    int         i;
    std::string res;

    i = 0;
    while (str[i])
    {
        if (str[i] >= 'a' && str[i] <= 'z')
            res.push_back(str[i] - 32);
        else
            res.push_back(str[i]);
        i++;
    }
    return (res);
}

int    input_user()
{
    std::string str;

    std::cout << "Que voulez vous faire ?" << std::endl;
    std::getline(std::cin, str);
    str = toupper(str);
    if (str.compare("ADD") == 0)
        return (2);
    else if (str.compare("SEARCH") == 0)
        return (3);
    else if (str.compare("EXIT") == 0)
        return(0);
    return (1);
}

Contact add_contact(void)
{
    Contact     res;
    std::string buf;

    std::cout << "Veuillez remplir les informations suivantes pour ajouter un nouveau contact" << std::endl;
    std::cout << "Prenom:" << std::endl;
    std::getline(std::cin, buf);
    res.set_firstName(buf);
    std::cout << "Nom:" << std::endl;
    std::getline(std::cin, buf);
    res.set_lastName(buf);
    std::cout << "Surnom:" << std::endl;
    std::getline(std::cin, buf);
    res.set_nickname(buf);
    std::cout << "Login:" << std::endl;
    std::getline(std::cin, buf);
    res.set_login(buf);
    std::cout << "Adresse postale:" << std::endl;
    std::getline(std::cin, buf);
    res.set_postalAddress(buf);
    std::cout << "Adresse email:" << std::endl;
    std::getline(std::cin, buf);
    res.set_emailAddress(buf);
    std::cout << "Numero de telephone:" << std::endl;
    std::getline(std::cin, buf);
    res.set_phoneNumber(buf);
    std::cout << "Date de naissance:" << std::endl;
    std::getline(std::cin, buf);
    res.set_birthdayDate(buf);
    std::cout << "Plat favori:" << std::endl;
    std::getline(std::cin, buf);
    res.set_favoriteMeal(buf);
    std::cout << "Couleur des sous vetements:" << std::endl;
    std::getline(std::cin, buf);
    res.set_underwearColor(buf);
    std::cout << "Secret le plus sombre:" << std::endl;
    std::getline(std::cin, buf);
    res.set_darkestSecret(buf);
    std::cout << "Le contact a ete ajoute avec succes !" << std::endl;
    std::cout << std::endl;
    return (res);
}

int     main(int argc, char const *argv[])
{
    int res;
    int nb;
    Contact tab[NB_CONTACT];
    
    nb = 0;
    welcome();
    while ((res = input_user()) != 0)
    {
        if (res == 2)
        {
            if (nb < NB_CONTACT)
                tab[nb++] =  add_contact();
            else
                std::cout << "L'annuaire est plein, impossible d'ajouter d'autres contacts" << std::endl;
        }
        else if (res == 3)
        {
            if (nb == 0)
                std::cout << "L'annuaire est vide, veuillez ajouter des contacts" << std::endl;
            else
                search_contact(nb, tab);
        }   
        else
            std::cout << "Cette commande n'existe pas !" << std::endl;
    }
    std::cout << "Fermeture de l'annuaire ..." << std::endl;
    return (0);
}
