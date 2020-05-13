/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:52:03 by alidy             #+#    #+#             */
/*   Updated: 2020/05/04 16:40:35 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main(void)
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
    p1.takeDamage(30);
    std::cout << std::endl;
    p1.beRepaired(50); // + que le max
    std::cout << std::endl;
    p2.beRepaired(20); // - que le max
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(p2.getName());
    std::cout << std::endl;
    p2.takeDamage(90); // + que le min
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(p2.getName());
    std::cout << std::endl;
    p2.takeDamage(500); // - que le min
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(pnj);
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(pnj);
    std::cout << std::endl;
    p1.vaulthunter_dot_exe(pnj); // Plus d'energie
    std::cout << std::endl;
}