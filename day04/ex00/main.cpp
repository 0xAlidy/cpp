/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/01 16:49:19 by alidy             #+#    #+#             */
/*   Updated: 2021/06/01 18:04:36 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "Sorcerer.hpp"
#include "Victim.hpp"
#include "Peon.hpp"
#include "Noob.hpp"

int main()
{
    //Sorcerer test;
    Sorcerer robert("Robert", "the Magnificent");
    Victim jim("Jimmy");
    Peon joe("Joe");
    Noob bob("Bob");

    std::cout << robert << jim << joe << bob;

    robert.polymorph(jim);
    robert.polymorph(joe);
    robert.polymorph(bob);

    return (0); 
}