/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/30 15:03:46 by alidy             #+#    #+#             */
/*   Updated: 2021/05/26 14:54:10 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Pony.hpp"

void    ponyOnTheStack(void)
{
    Pony pony("Hecarim", 5, "marron");

    std::cout << "Le poney s'appelle " << pony.get_name() << std::endl;
    std::cout << "Il a " << pony.get_age() << " ans" << std::endl;
    std::cout << "Et il est " << pony.get_color() << std::endl;
}

void    ponyOnTheHeap(void)
{
    Pony *pony;

    pony = new Pony("Abraxas", 8, "noir");
    std::cout << "Le poney s'appelle " << pony->get_name() << std::endl;
    std::cout << "Il a " << pony->get_age() << " ans" << std::endl;
    std::cout << "Et il est " << pony->get_color() << std::endl;
    delete pony;
}

int     main()
{
    std::cout << "Présentation du poney sur la stack :" << std::endl;
    ponyOnTheStack();
    std::cout << "Il vient malheureusement de mourir puisque nous venons de quitter la fonction !" << std::endl;
    std::cout << "RIP" << std::endl << std::endl;
    std::cout << "Présentation du poney sur la heap :" << std::endl;
    ponyOnTheHeap();
    std::cout << "Il vient malheureusement de mourir puisque nous venons de le détruire avec DELETE !" << std::endl;
    std::cout << "RIP" << std::endl << std::endl;
    return (0);
}