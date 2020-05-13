/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:52:03 by alidy             #+#    #+#             */
/*   Updated: 2020/05/04 17:20:56 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"

int main(void)
{
    ClapTrap perso1("Clap");
    std::cout << std::endl;
    FragTrap perso2("Frag");
    std::cout << std::endl;
    ScavTrap perso3("Scav");
    std::cout << std::endl;
    NinjaTrap perso4("Ninja");
    std::cout << std::endl;
    NinjaTrap perso5("Naruto");
    std::cout << std::endl;

    perso4.ninjaShoeBox(perso1);
    std::cout << std::endl;
    perso4.ninjaShoeBox(perso2);
    std::cout << std::endl;
    perso4.ninjaShoeBox(perso3);
    std::cout << std::endl;
    perso4.ninjaShoeBox(perso5);
    std::cout << std::endl;
}