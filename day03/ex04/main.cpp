/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.42lyon.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 17:52:03 by alidy             #+#    #+#             */
/*   Updated: 2020/05/19 11:17:05 by alidy            ###   ########lyon.fr   */
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

    perso.ninjaShoeBox(pnj);
    std::cout << std::endl;
    perso.vaulthunter_dot_exe(pnj.getName());
    std::cout << std::endl;
    perso.rangedAttack(pnj.getName());
    std::cout << std::endl;
    perso.meleeAttack(pnj.getName());
    std::cout << std::endl;
}