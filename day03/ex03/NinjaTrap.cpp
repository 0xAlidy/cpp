/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   NinjaTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alidy <alidy@student.le-101.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/01 13:16:05 by alidy             #+#    #+#             */
/*   Updated: 2020/05/04 15:56:15 by alidy            ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "NinjaTrap.hpp"

NinjaTrap::NinjaTrap(void): ClapTrap("Defaut", 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "On ne l'a pas vu venir pusique c'est un NinjaTrap ! Il s'appelle " << _name << "." << std::endl;
}

NinjaTrap::NinjaTrap(std::string name): ClapTrap(name, 60, 60, 120, 120, 1, 60, 5, 0)
{
    std::cout << "On ne l'a pas vu venir pusique c'est un NinjaTrap ! Il s'appelle " << _name << "." << std::endl;
}

NinjaTrap::NinjaTrap(NinjaTrap const& obj, std::string name): ClapTrap(obj, name)
{
    std::cout << "On ne l'a pas vu venir puisque c'est un NinjaTrap ! Il s'appelle " << _name << "." << std::endl;
    std::cout << "C'est une copie conforme de " << obj._name << "." << std::endl; 
}

NinjaTrap::~NinjaTrap(void)
{
    std::cout << "On n'a pas vu s'enfuir <NINJ4-TR4P> " << _name << " mais il n'est plus là !" << std::endl;
}

void    NinjaTrap::ninjaShoeBox(ClapTrap &target)
{
    std::cout << "<NINJ4-TR4P> " << _name << " attaque un de ses parents <CL4P-TR4P> " << target.getName() << " de loin." << std::endl;
    target.takeDamage(_rangedAttackDamage);
}

void    NinjaTrap::ninjaShoeBox(FragTrap &target)
{
    std::cout << "<NINJ4-TR4P> " << _name << " attaque un de ses amis <FR4G-TR4P> " << target.getName() << " au CAC." << std::endl;
    target.takeDamage(_meleeAttackDamage);
}

void    NinjaTrap::ninjaShoeBox(ScavTrap &target)
{
    std::cout << "<NINJ4-TR4P> " << _name << " attaque un de ses cousins <SC4V-TR4P> " << target.getName() << " de loin." << std::endl;
    target.takeDamage(_rangedAttackDamage);
}

void    NinjaTrap::ninjaShoeBox(NinjaTrap &target)
{
    std::cout << "<NINJ4-TR4P> " << _name << " attaque un de ses frères <NINJ4-TR4P> " << target.getName() << " au CAC."<< std::endl;
    target.takeDamage(_meleeAttackDamage);
}