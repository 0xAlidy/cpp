/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:52:03 by alidy             #+#    #+#             */
/*   Updated: 2021/05/31 16:36:41 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include "SuperTrap.hpp"

int main(void)
{
    SuperTrap   perso("Jack");
    ClapTrap    pnj("Bot");

    std::cout << std::endl;
    perso.ninjaShoeBox(pnj);
    std::cout << std::endl;
    perso.vaulthunter_dot_exe(pnj.getName());
    std::cout << std::endl;
    perso.rangedAttack(pnj.getName());
    std::cout << std::endl;
    perso.meleeAttack(pnj.getName());
    std::cout << std::endl;
}