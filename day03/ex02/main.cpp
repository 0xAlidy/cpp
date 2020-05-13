/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:52:03 by alidy             #+#    #+#             */
/*   Updated: 2020/05/04 16:22:39 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

int main(void)
{
    ClapTrap perso1("Clap");
    std::cout << std::endl;
    FragTrap perso2("Frag");
    std::cout << std::endl;
    ScavTrap perso3("Scav");
    std::cout << std::endl;
    FragTrap perso4(perso2, "Frag2");
    std::cout << std::endl;

    perso2.takeDamage(10);
    std::cout << std::endl;
    perso4 = perso2; // devient frag avec -(5pv)
    perso4.takeDamage(5); // affiche les pv
    std::cout << std::endl;
    perso4.getName(); // affiche name
    std::cout << std::endl;
    perso2.vaulthunter_dot_exe(perso3.getName());
    std::cout << std::endl;
    perso3.beRepaired(5);
    std::cout << std::endl;
    perso3.challengeNewcomer();
    std::cout << std::endl;
    std::cout << std::endl << std::endl;

}