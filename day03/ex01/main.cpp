/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:52:03 by alidy             #+#    #+#             */
/*   Updated: 2021/05/31 15:35:17 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

void    ex00(void)
{
       FragTrap p1("Walle");
    std::cout << std::endl;
    FragTrap p2(p1, "Robocop");
    std::string pnj = "Epouvantail";

    std::cout << std::endl;
    p1.meleeAttack(p2.getName());
    std::cout << std::endl;
    p2.takeDamage(30);
    std::cout << std::endl;
    p2.RangedAttack(p1.getName());
    std::cout << std::endl;
    p1.takeDamage(20);
    std::cout << std::endl;
    p1.beRepaired(-20); // non valide
    std::cout << std::endl;
    p1.beRepaired(20); // + que le max
    std::cout << std::endl;
    p2.beRepaired(20); // - que le max
    std::cout << std::endl;
    p2.takeDamage(90); // + que le min
    std::cout << std::endl;
    p2.takeDamage(-500); // non valide
    std::cout << std::endl;
    p2.takeDamage(500); // - que le min
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(pnj);
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(pnj);
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(pnj);
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(pnj);
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(pnj); // Plus d'energie
    std::cout << std::endl;
}

int main(void)
{
    ScavTrap perso("Capitaine");

    ex00();
    std::cout << std::endl << std::endl;
    perso.challengeNewcomer();
    std::cout << std::endl;
    perso.challengeNewcomer();
    std::cout << std::endl;
    perso.challengeNewcomer();
    std::cout << std::endl;
    perso.challengeNewcomer();
    std::cout << std::endl;
    perso.challengeNewcomer();
    std::cout << std::endl;
}